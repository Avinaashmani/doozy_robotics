int right_enA = 9;
int right_enB = 12;
int right_a1 = 10;
int right_a2 = 8;
int right_b1 = 13;
int right_b2 = 11;

int left_enA = 3;
int left_enB = 6;
int left_a1 = 4;
int left_a2 = 2;
int left_b1 = 5;
int left_b2 = 7;

const int wheel_sep = 35;
const int wheel_dia = 7;

String operation_flag;
String speed_value_str;
float speed_value;

float wheel_left_speed;
float wheel_right_speed;

float linear_speed = 1;
float angular_speed = 1;

String linear_speed_str;
String angular_speed_str;

float wheel_speed_right;
float wheel_speed_left;

void setup() 
{
  Serial.begin(57600);
  motor_setup();
  linear_speed = 1.0;
  angular_speed = 1.0;
  off();
}

void loop() 
{
//  Serial.print("hello");
  if (Serial.available() > 0)
  {
    
    char serial_input = Serial.read();
    String velocity_data = Serial.readStringUntil('>');
    
    int de_limiter_index = velocity_data.indexOf('#');
//    Serial.println(velocity_data);
    if (de_limiter_index != -1)

    {
      linear_speed_str = velocity_data.substring(0, de_limiter_index);
      angular_speed_str = velocity_data.substring(de_limiter_index+1);

      linear_speed = linear_speed_str.toInt();
      angular_speed = angular_speed_str.toInt();

     wheel_speed_right =(fabs((linear_speed/wheel_sep) - ((angular_speed/wheel_sep)/wheel_dia))) * 100;
     wheel_speed_left =(fabs((linear_speed/wheel_sep) + ((angular_speed/ wheel_sep)/wheel_dia))) * 100;

     
          float linear_map_left = map(wheel_speed_left, 0, 57, 150, 255);
          float linear_map_right = map(wheel_speed_right, 0, 57, 150, 255);

          float angular_map_left = map(wheel_speed_left,0, 4, 150, 255);
          float angular_map_right = map(wheel_speed_right, 0, 4, 150, 255); 

          float arc_map_left = map(wheel_speed_left, 0, 61, 150, 255);
          float arc_map_right = map(wheel_speed_right, 0, 61, 150, 255);

//      Serial.println(String(wheel_speed_right) + " " + String (wheel_speed_left) + " " + function_flag);

      if (linear_speed != 0 && angular_speed == 0)
      {
        if (linear_speed >0)
        {
          forward(linear_map_left, linear_map_right);
        }
        else if (linear_speed < 0)
        {
          reverse(linear_map_left, linear_map_right);
        }
      }
      else if (linear_speed == 0 && angular_speed != 0)
      {
        if (angular_speed > 0)
        {
          turn_right (angular_map_left, angular_map_right);
        }
        else if (angular_speed < 0)
        {
          turn_left (angular_map_left, angular_map_right);
        }
      }
      else if (linear_speed != 0 && angular_speed != 0)
      {
        arc(linear_speed, angular_speed, arc_map_left, arc_map_right);
      }
      else if (linear_speed == 0 && angular_speed == 0)
      {
        off();
        
      }
  }
}
}

void motor_setup()
{
  Serial.write ("Motors Initialized");
  pinMode (right_enA, OUTPUT);
  pinMode (right_enB, OUTPUT);
  pinMode (right_a1, OUTPUT);
  pinMode (right_a2, OUTPUT);
  pinMode (right_b1, OUTPUT);
  pinMode (right_b2, OUTPUT);

  pinMode (left_enA, OUTPUT);
  pinMode (left_enB, OUTPUT);
  pinMode (left_a1, OUTPUT);
  pinMode (left_a2, OUTPUT);
  pinMode (left_b1, OUTPUT);
  pinMode (left_b2, OUTPUT);
}

void motor_run_test()
{
  digitalWrite (right_a1, HIGH);
  digitalWrite (right_a2, LOW);
  
  digitalWrite (right_b1, HIGH);
  digitalWrite (right_b2, LOW);

  analogWrite (right_enA, 255);
  analogWrite (right_enB, 255);

  digitalWrite (left_a1, HIGH);
  digitalWrite (left_a2, LOW);
  
  digitalWrite (left_b1, HIGH);
  digitalWrite (left_b2, LOW);

  analogWrite (left_enA, 255);
  analogWrite (left_enB, 255);

  delay(5000);

  off();
}

void forward(int vel_left, int vel_right)
{
    
  digitalWrite (right_a1, HIGH);
  digitalWrite (right_a2, LOW);
  
  digitalWrite (right_b1, HIGH);
  digitalWrite (right_b2, LOW);
  
  digitalWrite (left_a1, HIGH);
  digitalWrite (left_a2, LOW);
  
  digitalWrite (left_b1, HIGH);
  digitalWrite (left_b2, LOW);
  
  analogWrite (right_enA, vel_right);
  analogWrite (right_enB, vel_right);
  
  analogWrite (left_enA, vel_left);
  analogWrite (left_enB, vel_left);
}

void reverse(int vel_left, int vel_right)
{
  digitalWrite (right_a1, LOW);
  digitalWrite (right_a2, HIGH);
  
  digitalWrite (right_b1, LOW);
  digitalWrite (right_b2, HIGH);
  
  digitalWrite (left_a1, LOW);
  digitalWrite (left_a2, HIGH);
  
  digitalWrite (left_b1, LOW);
  digitalWrite (left_b2, HIGH);

  
  analogWrite (right_enA, vel_right);
  analogWrite (right_enB, vel_right);
  
  analogWrite (left_enA, vel_left);
  analogWrite (left_enB, vel_left);;
}

void turn_right(int vel_left, int vel_right)
{
  digitalWrite (right_a1, LOW);
  digitalWrite (right_a2, HIGH);
  
  digitalWrite (right_b1, LOW);
  digitalWrite (right_b2, HIGH);
  
  digitalWrite (left_a1, HIGH);
  digitalWrite (left_a2, LOW);
  
  digitalWrite (left_b1, HIGH);
  digitalWrite (left_b2, LOW);

  analogWrite (right_enA, vel_right);
  analogWrite (right_enB, vel_right);
  
  analogWrite (left_enA, vel_left);
  analogWrite (left_enB, vel_left);;
}

void turn_left(int vel_left, int vel_right)
{
  digitalWrite (right_a1, HIGH);
  digitalWrite (right_a2, LOW);
  
  digitalWrite (right_b1, HIGH);
  digitalWrite (right_b2, LOW);
  
  digitalWrite (left_a1, LOW);
  digitalWrite (left_a2, HIGH);
  
  digitalWrite (left_b1, LOW);
  digitalWrite (left_b2, HIGH);

  analogWrite (right_enA, vel_right);
  analogWrite (right_enB, vel_right);
  
  analogWrite (left_enA, vel_left);
  analogWrite (left_enB, vel_left);;
}

void arc (float linear, float angular, float vel_left, float vel_right)
{
  if (linear > 0 && angular < 0)
  {
    digitalWrite (right_a1, HIGH);
    digitalWrite (right_a2, LOW);
  
    digitalWrite (right_b1, HIGH);
    digitalWrite (right_b2, LOW);
  
    digitalWrite (left_a1, HIGH);
    digitalWrite (left_a2, LOW);
  
    digitalWrite (left_b1, HIGH);
    digitalWrite (left_b2, LOW);
  
    analogWrite (right_enA, vel_right);
    analogWrite (right_enB, vel_right);
  
    analogWrite (left_enA, vel_left);
    analogWrite (left_enB, vel_left);
  }

   else if (linear > 0 && angular > 0)
  {
    digitalWrite (right_a1, HIGH);
    digitalWrite (right_a2, LOW);
  
    digitalWrite (right_b1, HIGH);
    digitalWrite (right_b2, LOW);
  
    digitalWrite (left_a1, HIGH);
    digitalWrite (left_a2, LOW);
  
    digitalWrite (left_b1, HIGH);
    digitalWrite (left_b2, LOW);
  
    analogWrite (right_enA, vel_right);
    analogWrite (right_enB, vel_right);
  
    analogWrite (left_enA, vel_left);
    analogWrite (left_enB, vel_left);
  }
  
  else if (linear < 0 && angular <0 )
  {
    digitalWrite (right_a1, LOW);
    digitalWrite (right_a2, HIGH);
  
    digitalWrite (right_b1, LOW);
    digitalWrite (right_b2, HIGH);
  
    digitalWrite (left_a1, LOW);
    digitalWrite (left_a2, HIGH);
  
    digitalWrite (left_b1, LOW);
    digitalWrite (left_b2, HIGH);
  
    analogWrite (right_enA, vel_right);
    analogWrite (right_enB, vel_right);
  
    analogWrite (left_enA, vel_left);
    analogWrite (left_enB, vel_left);
  }

    else if (linear < 0 && angular > 0)
  {
    digitalWrite (right_a1, LOW);
    digitalWrite (right_a2, HIGH);
  
    digitalWrite (right_b1, LOW);
    digitalWrite (right_b2, HIGH);
  
    digitalWrite (left_a1, LOW);
    digitalWrite (left_a2, HIGH);
  
    digitalWrite (left_b1, LOW);
    digitalWrite (left_b2, HIGH);
  
    analogWrite (right_enA, vel_right);
    analogWrite (right_enB, vel_right);
  
    analogWrite (left_enA, vel_left);
    analogWrite (left_enB, vel_left);
  }
}

void off()
{
  digitalWrite (right_a1, LOW);
  digitalWrite (right_a2, LOW);
  
  digitalWrite (right_b1, LOW);
  digitalWrite (right_b2, LOW);
  
  digitalWrite (left_a1, LOW);
  digitalWrite (left_a2, LOW);
  
  digitalWrite (left_b1, LOW);
  digitalWrite (left_b2, LOW);
  
  analogWrite (right_enA, 0);
  analogWrite (right_enB, 0);
  
  analogWrite (left_enA, 0);
  analogWrite (left_enB, 0);;
}

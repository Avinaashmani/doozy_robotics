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

String operation_flag;
String speed_value_str;
float speed_value;

float wheel_left_speed;
float wheel_right_speed;

float linear_speed;
float angular_speed;

String linear_speed_str;
String angular_speed_str;

void setup() 
{
  Serial.begin(57600);
  motor_setup();
//  forward();
off();
}

void loop() 
{
  if (Serial.available() > 0)
  {
    char serial_input = Serial.read();
    String data_input = Serial.readStringUntil('>');

    float seperator_flag_1 = data_input.indexOf('#');
    float seperator_flag_2 = data_input.indexOf('#', seperator_flag_1 + 1);

    if (seperator_flag_1 != -1 && seperator_flag_2 != -1)
    {
      operation_flag = data_input.substring(1, seperator_flag_1);
      
      linear_speed_str = data_input.substring(seperator_flag_1 +1, seperator_flag_2);
      angular_speed_str = data_input.substring(seperator_flag_2 +1); 

      linear_speed = linear_speed_str.toFloat();
      angular_speed = angular_speed_str.toFloat();

      Serial.println(operation_flag);
    }
    
//    if (serial_input == '1')
//    {
//      forward();
//      Serial.println("Moving Forward");
//    }
//
//    else if (serial_input == '2')
//    {
//      reverse();
//      Serial.println("Moving Reverse");
//    }
//
//    else if (serial_input == '3')
//    {
//      turn_right();
//      Serial.println("Turning Right");
//    }
//
//    else if (serial_input == '4')
//    {
//      turn_left();
//      Serial.println("Turning Left");
//    }
//
//    else if (serial_input == '0')
//    {
//      off();
//      Serial.println ("Stopped");
//    } 
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
}

void forward(float vel_left, float vel_right)
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

void reverse()
{
  digitalWrite (right_a1, LOW);
  digitalWrite (right_a2, HIGH);
  
  digitalWrite (right_b1, LOW);
  digitalWrite (right_b2, HIGH);
  
  digitalWrite (left_a1, LOW);
  digitalWrite (left_a2, HIGH);
  
  digitalWrite (left_b1, LOW);
  digitalWrite (left_b2, HIGH);
}

void turn_right()
{
  digitalWrite (right_a1, LOW);
  digitalWrite (right_a2, HIGH);
  
  digitalWrite (right_b1, LOW);
  digitalWrite (right_b2, HIGH);
  
  digitalWrite (left_a1, HIGH);
  digitalWrite (left_a2, LOW);
  
  digitalWrite (left_b1, HIGH);
  digitalWrite (left_b2, LOW);
}

void turn_left()
{
  digitalWrite (right_a1, HIGH);
  digitalWrite (right_a2, LOW);
  
  digitalWrite (right_b1, HIGH);
  digitalWrite (right_b2, LOW);
  
  digitalWrite (left_a1, LOW);
  digitalWrite (left_a2, HIGH);
  
  digitalWrite (left_b1, LOW);
  digitalWrite (left_b2, HIGH);
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
}

int cw = 4;
int ccw = 3;
int speed_control = 5;
int speed_value = 120;
int time_delay = 500;

bool motor_operation_flag = true;
bool cw_flag = true;
bool ccw_flag;

int encoder_value;

const int buffer_size = 64;
char recieved_data[buffer_size];

int read_input;

float kp = 0.0;
float ki = 0.0;
float kd = 0.0;
String int_value ;

long previous_time;
long current_time;

float delta_t;

void motor_setup()
{
  pinMode(cw, OUTPUT);
  pinMode(ccw, OUTPUT);
  pinMode(speed_control, OUTPUT);
}

void off()
{
  digitalWrite (cw, LOW);
  digitalWrite (ccw, LOW);
  analogWrite (speed_control, 0);
}

void setup() {
  Serial.begin(9600);
  motor_setup();
  turn_cw();

  previous_time = micros();
}

void loop() 
{
  
  if (Serial.available() > 0)
  {
      char input = Serial.read();

      if (input == 'A')
      {
        turn_cw();
      }
      else if (input == 'B')
      {
        turn_ccw();
      }
      else if (input == 'S')
      {
        off();
      }

  }
}

void turn_cw()
{
  digitalWrite (cw, HIGH);
  digitalWrite (ccw, LOW);
  analogWrite (speed_control, speed_value);
  delay(500);
  digitalWrite (cw, LOW);
  digitalWrite (ccw, LOW);

}

void turn_ccw()
{
  digitalWrite (cw, LOW);
  digitalWrite (ccw, HIGH);
  analogWrite (speed_control, speed_value);
  delay(500);
  digitalWrite (cw, LOW);
  digitalWrite (ccw, LOW);

}

void startup()
{
  digitalWrite (cw, HIGH);
  digitalWrite (ccw, LOW);
  delay(500);
  digitalWrite (cw, LOW);
  digitalWrite (ccw, HIGH);
  delay(500);
}

//void pid_controller()
//{
//  current_time = micros();
//  delta_t = ((float)(current_time - previous_time)) / 1.0e6;
//
//}

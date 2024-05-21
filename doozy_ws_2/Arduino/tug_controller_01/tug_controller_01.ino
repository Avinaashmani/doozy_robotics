int cw_tug = 3;
int ccw_tug = 4;
int speed_control = 5;

int speed_value = 130;

void setup() 
{
  Serial.begin(9600);
  init_motors();
  //turn_clockwise();
  //turn_counter_clockwise();
  off();
}

void loop() 
{
  if (Serial.available() > 0)
  {
    char input_val = Serial.read();
    
    if (input_val == '1')
    
    {
      turn_clockwise();
      
    }
    
    else if (input_val == '2')
    {
      turn_clockwise();
    }
    
    else
    {
      off();
      
    }
  }
}

void init_motors()
{
  pinMode (cw_tug, OUTPUT);
  pinMode (ccw_tug, OUTPUT);
  pinMode (speed_control, OUTPUT);

}

void turn_clockwise()
{
  digitalWrite (cw_tug, LOW);
  digitalWrite (ccw_tug, HIGH);
  analogWrite (speed_control, speed_value);
  delay(1200);
  digitalWrite (cw_tug, LOW);
  digitalWrite (ccw_tug, LOW);
  analogWrite (speed_control, 0);
  Serial.write('1');
}

void turn_counter_clockwise()
{
  digitalWrite (cw_tug, HIGH);
  digitalWrite (ccw_tug, LOW);
  analogWrite (speed_control, speed_value);
  delay(1200);
  digitalWrite (cw_tug, LOW);
  digitalWrite (ccw_tug, LOW);
  analogWrite (speed_control, 0);
  Serial.write('1');
}

void off()
{
  digitalWrite (cw_tug, LOW);
  digitalWrite (ccw_tug, LOW);
  analogWrite (speed_control, 0);
}

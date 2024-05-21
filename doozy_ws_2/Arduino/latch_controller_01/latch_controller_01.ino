int rise_latch = 3;
int lower_latch = 4;
int speed_control = 5;

int speed_value = 255;

void setup() 
{
  Serial.begin(9600);
  init_motors();
//  latch_up();
//  latch_down();
  off();
}

void loop() 
{
  if (Serial.available() > 0)
  {
    char input_val = Serial.read();
    if (input_val == '1')
    {
      latch_down();
      delay (5000);
      latch_up();
      
      
    }
    else if (input_val == '2')
    {
      latch_down();
      delay(5000);
      latch_up(); 
      
    }
    else
    {
      off();
    }
  }
}

void init_motors()
{
  pinMode (rise_latch, OUTPUT);
  pinMode (lower_latch, OUTPUT);
  pinMode (speed_control, OUTPUT);

}

void latch_down()
{
  digitalWrite (rise_latch, LOW);
  digitalWrite (lower_latch, HIGH);
  analogWrite (speed_control, speed_value);
  delay(2000);
  digitalWrite (rise_latch, LOW);
  digitalWrite (lower_latch, LOW);
  analogWrite (speed_control, 0);
  Serial.write('1');
}

void latch_up()
{
  digitalWrite (rise_latch, HIGH);
  digitalWrite (lower_latch, LOW);
  analogWrite (speed_control, speed_value);
  delay(1800);
  digitalWrite (rise_latch, LOW);
  digitalWrite (lower_latch, LOW);
  analogWrite (speed_control, 0);
  Serial.write('1');
}

void off()
{
  digitalWrite (rise_latch, LOW);
  digitalWrite (lower_latch, LOW);
  analogWrite (speed_control, 0);
 
}

int rise_hook = 3;
int lower_hook = 4;
int speed_control = 5;

int speed_value = 255;

void setup() 
{
  Serial.begin(9600);
  init_motors();
  hook_open();
}

void loop() 
{
  if (Serial.available() > 0)
  {
    char input_val = Serial.read();
    if (input_val == '1')
    {
      hook_close();
      delay (5000);
      hook_open();
    }
    else if (input_val == '2')
    {
      hook_close();
      delay(5000);
      hook_open(); 
      
    }
  }
}

void init_motors()
{
  pinMode (rise_hook, OUTPUT);
  pinMode (lower_hook, OUTPUT);
  pinMode (speed_control, OUTPUT);

}

void hook_open()
{
  digitalWrite (rise_hook, LOW);
  digitalWrite (lower_hook, HIGH);
  analogWrite (speed_control, speed_value);
  delay(250);
  digitalWrite (rise_hook, LOW);
  digitalWrite (lower_hook, LOW);
  analogWrite (speed_control, 0);
  Serial.write('0');
}

void hook_close()
{
  digitalWrite (rise_hook, HIGH);
  digitalWrite (lower_hook, LOW);
  analogWrite (speed_control, speed_value);
  delay(250);
  digitalWrite (rise_hook, LOW);
  digitalWrite (lower_hook, LOW);
  analogWrite (speed_control, 0);
  Serial.write('1');
}

void off()
{
  digitalWrite (rise_hook, LOW);
  digitalWrite (lower_hook, LOW);
  analogWrite (speed_control, 0);
}

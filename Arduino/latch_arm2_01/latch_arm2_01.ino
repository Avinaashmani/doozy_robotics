int rise_latch = 4;
int lower_latch = 3;
int speed_control = 5;

int speed_value = 255;

void setup()
{
  Serial.begin(9600);
  pinMode(rise_latch, OUTPUT);
  pinMode(lower_latch, OUTPUT);
  pinMode(speed_control, OUTPUT);
}

void loop()
{
//  if (Serial.available() > 0)
//  {
//    char serial_values = Serial.read();

//    if (serial_values == '3')
//    {
      digitalWrite (rise_latch, HIGH);
      digitalWrite (lower_latch, LOW);
      analogWrite (speed_control, 100);
      Serial.println("Rise latch Activated");
//    } 

//    else if (serial_values == '0')
//    {
//      digitalWrite (rise_latch, LOW);
//      digitalWrite (lower_latch, LOW);
//      digitalWrite (speed_control, 100);
//      Serial.println("Rise latch Deactivated");
////    }

}

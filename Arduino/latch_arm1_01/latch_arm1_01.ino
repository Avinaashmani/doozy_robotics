int rise_latch = 3;
int lower_latch = 4;
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

      digitalWrite (rise_latch, LOW);
      digitalWrite (lower_latch, HIGH);
      analogWrite (speed_control, 255);
      Serial.println("Rise latch Activated");

}

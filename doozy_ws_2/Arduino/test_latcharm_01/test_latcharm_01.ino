int latch_high = 11;
int latch_low = 4;
int latch_speed = 5;
int speed_val = 255;


void setup() 
{
  Serial.begin(9600);
  pinMode (latch_high, OUTPUT);
  pinMode (latch_low, OUTPUT);
  pinMode (latch_speed, OUTPUT);
}

void loop() 
{
  digitalWrite(latch_high, HIGH);
  digitalWrite(latch_low, LOW);
  analogWrite (latch_speed, speed_val);
}

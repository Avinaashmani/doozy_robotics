int tug_arm_cw = 4;
int tug_arm_ccw = 3;
int speed_control = 5;

void setup() 
{

 Serial.begin(9600);
 
 pinMode (tug_arm_cw, OUTPUT);
 pinMode (tug_arm_ccw, OUTPUT);
 pinMode (speed_control, OUTPUT);
}

void loop() 
{
   if (Serial.available() > 0)
 {
  char recieved_flag = Serial.read();
  if (recieved_flag == '1')
  {
    turn_tug();
  }

  else if (recieved_flag == '0')
  {  
    digitalWrite(tug_arm_cw, LOW);
    digitalWrite(tug_arm_ccw, LOW);
    analogWrite(speed_control, 0);
    Serial.println ("Turn Tug Arm Deactivated");
  }
 }
}

void turn_tug()
{

 digitalWrite(tug_arm_cw, LOW);
 digitalWrite(tug_arm_ccw, HIGH);
 analogWrite(speed_control, 125);
 Serial.println ("Turn Tug Arm Activated");
 
 delay(1000);
 
 digitalWrite(tug_arm_cw, LOW);
 digitalWrite(tug_arm_ccw, LOW);
 analogWrite(speed_control, 0);
 Serial.println ("Turn Tug Arm Deactivated");
}

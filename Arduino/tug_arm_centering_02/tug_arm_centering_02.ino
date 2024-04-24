int tug_arm_cw = 4;
int tug_arm_ccw = 3;
int speed_control = 5;

void setup() 
{

 Serial.begin(9600);
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

void loop() 
{
  
}

void turn_tug()
{
 pinMode(tug_arm_cw, OUTPUT);
 pinMode(tug_arm_ccw, OUTPUT);
 pinMode(speed_control, OUTPUT);

 digitalWrite(tug_arm_cw, HIGH);
 digitalWrite(tug_arm_ccw, LOW);
 analogWrite(speed_control, 130);
 Serial.println ("Turn Tug Arm Activated");
 
 delay(3000);
 
 digitalWrite(tug_arm_cw, LOW);
 digitalWrite(tug_arm_ccw, LOW);
 analogWrite(speed_control, 0);
 Serial.println ("Turn Tug Arm Deactivated");
}

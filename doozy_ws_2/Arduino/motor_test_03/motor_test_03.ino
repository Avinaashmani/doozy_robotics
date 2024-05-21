int cw = 4;
int ccw = 3;
int speed_control = 5;

int speed_value = 130;
int time_delay = 500;

float kp = 0.0;
float ki = 0.0;
float kd = 0.0;

long previous_time;
long current_time;

float delta_t;

int flag_value;

String stringValue = "";
int intValue = 0;
bool dataReceived = false;

void setup() 
{
  Serial.begin(9600);
  Serial.println ("Motor Test script initialized");

  motor_init();  
  startup();
//  off();
  previous_time = micros();
}

void loop() 
{
  if (Serial.available() > 0) 
  {

    String data = Serial.readStringUntil('>');
    
    int delimiterIndex = data.indexOf('#');
    
    if (delimiterIndex != -1) 
    { 
      
      stringValue = data.substring(1, delimiterIndex); 
      String intValueStr = data.substring(delimiterIndex + 1);
 
      intValue = intValueStr.toInt();

      flag_value = stringValue.toInt();

      if (flag_value == 1)
      {
        turn_cw();
      }
      else if (flag_value == 2)
      {
        turn_ccw();
      }
      else if (flag_value == 0)
      {
        off();
      }
    }   


  }
  else
    {
      off();
    }
  }


void motor_init()
{
  
  pinMode(cw, OUTPUT);
  pinMode(ccw, OUTPUT);
  pinMode(speed_control, OUTPUT);
  
}

void turn_cw()
{
  digitalWrite (cw, HIGH);
  digitalWrite (ccw, LOW);
  analogWrite (speed_control, speed_value);
  
  delay(time_delay);
  
  digitalWrite (cw, LOW);
  digitalWrite (ccw, LOW);
  analogWrite (speed_control, 0);

}

void turn_ccw()
{
  digitalWrite (cw, LOW);
  digitalWrite (ccw, HIGH);
  analogWrite (speed_control, speed_value);
    
  delay(time_delay);
  
  digitalWrite (cw, LOW);
  digitalWrite (ccw, LOW);
  analogWrite (speed_control, 0);

}

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

void startup()
{
  digitalWrite (cw, HIGH);
  digitalWrite (ccw, LOW);
  delay(500);
  digitalWrite (cw, LOW);
  digitalWrite (ccw, HIGH);
  delay(500);

  
}

#include <ezButton.h>

int limit_switch_01 = 3;

ezButton limitSwitch(limit_switch_01);

void setup() 
{
  Serial.begin(9600);
//  pinMode(limit_switch_01, INPUT);
  limitSwitch.setDebounceTime(50);

}

void loop() 
{
  
  limitSwitch.loop();
  int state = limitSwitch.getState();
  Serial.println (state);

}

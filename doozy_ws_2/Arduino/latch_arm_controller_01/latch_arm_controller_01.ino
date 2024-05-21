#include <ros.h>
#include <std_msgs/Int16.h>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>

bool latch_dock_flag = false;
bool latch_undock_flag = false;

bool msg_flag =false;

int time_delay = 2000;

int rise_latch = 4;
int lower_latch = 3;
int speed_control = 5;

ros::NodeHandle node;
std_msgs::Int16 dock_flag;
std_msgs::Int16 undock_flag;
std_msgs::String diagnostics_msg;

ros::Publisher latch_diagnostics ("/arduino_latch_arm_diagnostics", &diagnostics_msg);

void controller_callback(std_msgs::Bool &flag_msg)
{
  msg_flag = flag_msg.data;
  if (msg_flag )
  {
    latch_dock_flag = true;  
    latch_undock_flag = false;
    
    delay(time_delay);
    
    latch_dock_flag = false;
    latch_undock_flag = false;
    
  }
  else
  {
    latch_dock_flag = false;
    latch_undock_flag = false;
  }
}

ros::Subscriber <std_msgs::Bool> controller_sub ("/latch_topic", controller_callback);


void setup() 
{
  Serial.begin(57600);
  
  pinMode(rise_latch, OUTPUT);
  pinMode(lower_latch, OUTPUT);
  pinMode(speed_control, OUTPUT);

  node.initNode();
  
  node.subscribe(controller_sub);
  node.advertise(latch_diagnostics);
 
}

void loop() 
{
  if (latch_dock_flag == true && latch_undock_flag == false)
  {
    digitalWrite (rise_latch, HIGH);
    digitalWrite (lower_latch, LOW);
    analogWrite (speed_control, 255);
    diagnostics_msg.data = "RISING THE HOOK";
    latch_diagnostics.publish(&diagnostics_msg);
    
  }  
  else if (latch_dock_flag == false && latch_undock_flag == true)
  {
    digitalWrite (rise_latch, LOW);
    digitalWrite (lower_latch, HIGH);
    analogWrite (speed_control, 255);
    diagnostics_msg.data = "LOWERING THE HOOK";
    latch_diagnostics.publish(&diagnostics_msg);
    
  }
  else
  {
    digitalWrite (rise_latch, LOW);
    digitalWrite (lower_latch, LOW);
    analogWrite (speed_control, 0);
    diagnostics_msg.data = "LATCH DIS-ENGAGED";
    latch_diagnostics.publish(&diagnostics_msg);
  }
node.spinOnce();
}

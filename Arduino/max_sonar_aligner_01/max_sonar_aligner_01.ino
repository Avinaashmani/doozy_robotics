// This script takes in the value of 5 ultrasonic sensors and sends
// to a python script to help 
// Align the forks towards the palette //

#include <ros.h>
#include <ros/time.h>
#include <sensor_msgs/Range.h>
#include <std_msgs/Float32.h>

#define sensor_1 A0
#define sensor_2 A1
#define sensor_3 A2
#define sensor_4 A3
#define sensor_5 A4

sensor_msgs::Range sonar_1;
sensor_msgs::Range sonar_2;
sensor_msgs::Range sonar_3;
sensor_msgs::Range sonar_4;
sensor_msgs::Range sonar_5;

ros::Publisher range_1 ("/range_sensor/one", &sonar_1);
ros::Publisher range_2 ("/range_sensor/two", &sonar_2);
ros::Publisher range_3 ("/range_sensor/three",&sonar_3);
ros::Publisher range_4 ("/range_sensor/four",&sonar_4);
ros::Publisher range_5 ("/range_sensor/five",&sonar_5);

ros::NodeHandle node;

float sensor_reading_1 = 0.0;
float sensor_reading_2 = 0.0;
float sensor_reading_3 = 0.0;
float sensor_reading_4 = 0.0;
float sensor_reading_5 = 0.0;

float tuning_parameter = 4.85;

int seq = 0;

void setup()
{
   Serial.begin (57600);
   
   node.initNode();
   
   node.advertise(range_1);
   node.advertise(range_2);
   node.advertise(range_3);
   node.advertise(range_4);
   node.advertise(range_5);

   pinMode(sensor_1, INPUT);
   pinMode(sensor_2, INPUT);
   pinMode(sensor_3, INPUT);
   pinMode(sensor_4, INPUT);
   pinMode(sensor_5, INPUT);
   
}

void loop() 
{
  read_sensor_1();
  read_sensor_2();
  read_sensor_3();
  read_sensor_4();
  read_sensor_5();
  
  sonar_1.header.seq = seq;
  sonar_1.range = sensor_reading_1;

  sonar_2.header.seq = seq;
  sonar_2.range = sensor_reading_2;

  sonar_3.header.seq = seq;
  sonar_3.range = sensor_reading_3;

  sonar_4.header.seq = seq;
  sonar_4.range = sensor_reading_4;

  sonar_5.header.seq = seq;
  sonar_5.range = sensor_reading_5;

  range_1.publish(&sonar_1);
  range_2.publish(&sonar_2);
  range_3.publish(&sonar_3);
  range_4.publish(&sonar_4);
  range_5.publish(&sonar_5);

  seq = seq+1;
  node.spinOnce(); 
}

void read_sensor_1()
{
  sensor_reading_1 = analogRead(sensor_1);
  return sensor_reading_1;
}

void read_sensor_2()
{
  sensor_reading_2 = analogRead(sensor_2);
  return sensor_reading_2;
}

void read_sensor_3()
{
  sensor_reading_3 = analogRead(sensor_3);
  return sensor_reading_3;
}

void read_sensor_4()
{
  sensor_reading_4 = analogRead(sensor_4);
  return sensor_reading_4;
}

void read_sensor_5()
{
  sensor_reading_5 = analogRead(sensor_5);
  return sensor_reading_5;
}

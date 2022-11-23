#include<Wire.h>
#define trigPin 2 #depends upon the pin you set the trigger
#define echoPin 3 #depends upon the pin you set the echo
long duration;
int distance;

void setup()
{
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    Serial.begin(9600);
    Serial.print("Distance Measurement")l
}
void loop()
{
    digitalWrite(trigpin,LOW);
    delay.Microseconds(2);
    digitalWrite(trigPin,HIGH);
    delay.Microseconds(10);
    duration=pulseIn(echoPin,HIGH);
    distance=(duration*0.034)/2;
    Serial.print("Distance: ");
    Serial.println(distance);
    if (distance<=10)
    {
        Serial.print("Very close");
    }
    if (distance>10 && distance<50)
    {
        Serial.print("Near Range");
    }
    else
    {
        Serial.print("Far Range");
    }
}

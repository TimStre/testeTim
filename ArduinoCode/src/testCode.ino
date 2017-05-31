
#include <Servo.h>

Servo bottom;
Servo top;


int pos_b = 0;
const int servoMin_b = 10;
const int servoMax_b = 140;
const int servoPin_b = 9;
const int servoDelay_b = 3;

int pos_t = 0;
const int servoMin_t = 70;
const int servoMax_t = 150;
const int servoPin_t = 10;
const int servoDelay_t = 15;

void setup()
{
  bottom.attach(servoPin_b);
  top.attach(servoPin_t);
}


void loop()
{
  for (pos_b = servoMin_b; pos_b < servoMax_b; pos_b += 1)
  {
    bottom.write(pos_b);
    delay(servoDelay_b);
  }


  for (pos_b = servoMax_b; pos_b >= servoMin_b; pos_b -= 1)
  {
    bottom.write(pos_b);
    delay(servoDelay_b);
  }

  delay(1000);

  for (pos_t = servoMin_t; pos_t < servoMax_t; pos_t += 1)
  {
    top.write(pos_t);
    delay(servoDelay_t);
  }


  for (pos_t = servoMax_t; pos_t >= servoMin_t; pos_t -= 1)
  {
    top.write(pos_t);
    delay(servoDelay_t);
  }


}

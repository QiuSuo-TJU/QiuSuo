#include <Stepper.h>
//https://zhuanlan.zhihu.com/p/154528355
int in1Pin = 12;
int in2Pin = 11;
int in3Pin = 10;
int in4Pin = 9;

Stepper motor(512, in1Pin, in2Pin, in3Pin, in4Pin);
//motor是这个电机的名称
//512是电机内部输出轴旋转一周步数，此处还没有考虑减速箱
//

void setup()
{
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin, OUTPUT);

  // this line is for Leonardo's, it delays the serial interface
  // until the terminal window is opened
  while (!Serial);

  Serial.begin(9600);
  motor.setSpeed(20);
}

void loop()
{
  if (Serial.available())
  {
    int steps = Serial.parseInt();
    motor.step(steps);
    //.电机名.setspeed(步数);.操作电机速度
    //全靠.电机名.step(步数);.来操作
  }
}

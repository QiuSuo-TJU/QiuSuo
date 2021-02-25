#include <Stepper.h>
#define in1Pin 8
#define in2Pin 10
#define in3Pin 9
#define in4Pin 11
int StepsRequired;

const int STEPS_PER_ROTOR_REV = 32;//电机内部输出轴旋转一周步数
const int GEAR_REDUCTION = 64;
//这两行等电机到手输入实际参数
const float STEPS_PER_OUT_REV = STEPS_PER_ROTOR_REV * GEAR_REDUCTION;

Stepper steppermotor(STEPS_PER_ROTOR_REV, in1Pin, in2Pin, in3Pin, in4Pin);
//这里需要根据驱动板实际情况调整in1Pin等的顺序
void setup()
{
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin, OUTPUT);
}

void loop()
{
  StepsRequired  =  - STEPS_PER_OUT_REV;
  steppermotor.setSpeed(90);
  //这一行调速度,参数直接是转速
  steppermotor.step(StepsRequired);
  //没加延时，无限转
  //这段内容因为是无限转所以可以直接放到setup里面
}

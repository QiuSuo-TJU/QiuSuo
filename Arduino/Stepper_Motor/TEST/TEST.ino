#include <Stepper.h>
#define VCC 2
#define PLS 3
#define DIR 4
#define ENA 5//锁死，不用管它
int StepsRequired;

const int STEPS_PER_ROTOR_REV = 200;//电机内部输出轴旋转一周步数
const int GEAR_REDUCTION = 1;
//这两行等电机到手输入实际参数
const float STEPS_PER_OUT_REV = STEPS_PER_ROTOR_REV * GEAR_REDUCTION;

Stepper steppermotor(STEPS_PER_ROTOR_REV, PLS, 19);
//这里需要根据驱动板实际情况调整in1Pin等的顺序
void setup()
{
pinMode(VCC, OUTPUT);
pinMode(PLS, OUTPUT);
pinMode(DIR, OUTPUT);
pinMode(ENA, OUTPUT);
}

void loop()
{
  StepsRequired  =  - STEPS_PER_OUT_REV;
  steppermotor.setSpeed(90);
  //这一行调速度,参数直接是转速
  steppermotor.step(StepsRequired);
  digitalWrite(ENA,LOW);
  digitalWrite(DIR,HIGH);
  //没加延时，无限转
  //这段内容因为是无限转所以可以直接放到setup里面
}

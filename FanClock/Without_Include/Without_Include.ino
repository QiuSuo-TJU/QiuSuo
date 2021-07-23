#define VCC A0
#define PLS A1
#define DIR A3
#define ENA A5
int count = 500;
void setup() {
pinMode(VCC, OUTPUT);
pinMode(PLS, OUTPUT);
pinMode(DIR, OUTPUT);
pinMode(ENA, OUTPUT);
Serial.begin(9600);
}
void loop() {
digitalWrite(VCC, HIGH);
digitalWrite(ENA, HIGH);
digitalWrite(DIR, LOW); //反转//LOW是反转？
//正转一圈，用时1s
//此处驱动器定义1600步为1圈
//本来1600X625微秒=1秒，因为时间间隔太短，程序运行也需要时间，间隔时间/2之后总时间差不多1秒
for(int x=0; x<count; x++){
digitalWrite(PLS, HIGH);
delayMicroseconds(650/2);
digitalWrite(PLS, LOW);
delayMicroseconds(650/2);//取625/2
}/*
delay(10); 
*/
}
//这个就比较简单易懂了，没有引用库，直接操作

//VCC 给驱动器提供电源引脚，PLS 给步进电机提供脉冲引脚，DIR 决定电机是正转还是反转，ENA 是步进电机驱动器的开关
//如果控制电路给 ENA 引脚高电压那么就相当于让驱动器接受控制信号，如果 ENA 提供低电压，无论怎么给脉冲信号电机都不会动。
//在 PLS 引脚产生一定频率的脉冲，并控制脉冲时间，就可控制步进电机。

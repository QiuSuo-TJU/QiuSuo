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
}
void loop() {
digitalWrite(VCC, HIGH);
digitalWrite(ENA, HIGH);
digitalWrite(DIR, LOW); //反转//LOW是反转？
for(int x=0; x<count; x++){
digitalWrite(PLS, HIGH);
delayMicroseconds(650.0/2);
digitalWrite(PLS, LOW);
delayMicroseconds(650.0/2);//
}
}

//VCC 给驱动器提供电源引脚，PLS 给步进电机提供脉冲引脚，DIR 决定电机是正转还是反转，ENA 是步进电机驱动器的开关
//如果控制电路给 ENA 引脚高电压那么就相当于让驱动器接受控制信号，如果 ENA 提供低电压，无论怎么给脉冲信号电机都不会动。
//在 PLS 引脚产生一定频率的脉冲，并控制脉冲时间，就可控制步进电机。

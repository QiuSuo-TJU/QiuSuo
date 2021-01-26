#define VCC 2
#define PLS 3
#define DIR 4
#define ENA 5
void setup() {
pinMode(VCC, OUTPUT);
pinMode(PLS, OUTPUT);
pinMode(DIR, OUTPUT);
pinMode(ENA, OUTPUT);
}
void loop() {
digitalWrite(VCC, HIGH);
digitalWrite(ENA, HIGH);
digitalWrite(DIR, HIGH); //正转
//正转一圈，用时1s
//此处驱动器定义1600步为1圈
//本来1600X625微秒=1秒，因为时间间隔太短，程序运行也需要时间，间隔时间/2之后总时间差不多1秒
for(int x=0; x<1600; x++){
digitalWrite(PLS, HIGH);
delayMicroseconds(625/2);
digitalWrite(PLS, LOW);
delayMicroseconds(625/2);
}
delay(1000); //停1s
digitalWrite(DIR, LOW); //反转
//反转一圈，用时1s
for(int x=0; x<1600; x++){
digitalWrite(PLS, HIGH);
delayMicroseconds(625/2);
digitalWrite(PLS, LOW);
delayMicroseconds(625/2);
}
delay(1000); //停1s
}

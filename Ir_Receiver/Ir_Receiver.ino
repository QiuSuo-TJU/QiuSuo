#include <ir_Lego_PF_BitStreamEncoder.h>
#include <boarddefs.h>
#include <IRremoteInt.h>
#include <IRremote.h>

#define RECV_PIN 11 //先做一个引脚的定义

IRrecv irrecv(RECV_PIN); //建立IRrecv对象，初始化接收器
decode_results results; //存储红外信息


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Enable Irin!");
irrecv.enableIRIn(); //启动红外接收
Serial.println("Enable Irin!");
}

void loop() {
  // put your main code here, to run repeatedly:
if (irrecv.decode(&results)){ //利用返回值,如果能够成功解码，就进循环
Serial.print(results.value, HEX);//results.value是红外遥控信号的具体数值
  if(results.value == 0xF7C03F){
    Serial.print("Command is ON.");
    digitalWrite(LED_BUILTIN, HIGH); 
  }
irrecv.resume();//恢复irrecv，即开始接收下一条红外遥控信号
}
delay(100);
}

#include <IRremote.h>

IRrecv irrecv(2);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&results)){
    Serial.println(results.value);
    Serial.println(results.decode_type);//输出类型
    if(results.decode_type == NEC){//11就是NEC协议
      Serial.println("NEC");
    }
    else if(results.decode_type == SONY){
      Serial.println("SONY");
    }
    else{
      Serial.println("Other");
    }
    irrecv.resume();//接收器恢复接收状态
  }
  delay(100);
}

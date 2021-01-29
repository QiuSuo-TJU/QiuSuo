# 蜂鸣器

## 类别

有源蜂鸣器和无缘蜂鸣器——区别，有无震荡源

## Program

tone(pin, f//频率30~65535)

tone(p,f,d)

```C++
// tone(pin, f//频率30~65535)
void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);

tone(7, 4000, 500);
//noTone(7)也可以使得他停止 
}

void loop() {
  // put your main code here, to run repeatedly:

}
```

## 各个音符的频率在图片中





​	
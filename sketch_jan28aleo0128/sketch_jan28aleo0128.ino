boolean pushButton;

void setup() {
  // put your setup code here, to run once:
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  pushButton = digitalRead(2);
  // Turn off pin 13 when the button's pressed, and on when it's not:
  if(pushButton) {
    digitalWrite(13,HIGH);
  } else {
    digitalWrite (13,LOW);
  }
}

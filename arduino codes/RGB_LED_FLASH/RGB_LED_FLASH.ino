int timer = 200;
void clear(){
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
}

void setup() {
  pinMode(3, 1);
  pinMode(5, 1);
  pinMode(6, 1);
  pinMode(2, 1);
  pinMode(4, 1);
  
  

}

void loop() {
 analogWrite(3, 100);
delay(timer);
analogWrite(5, 100);
delay(timer);
analogWrite(6, 100);
clear();
analogWrite(5, 100);
delay(timer);
analogWrite(6, 100);
delay(timer);
clear();
analogWrite(6, 100);
delay(timer);
analogWrite(3, 100);
delay(timer);
clear(); 




  
}

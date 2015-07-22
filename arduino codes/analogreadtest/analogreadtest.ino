int potval= analogRead(A0);
void setup(){
  
  Serial.begin(9600);
  pinMode(A0, 0);
}






void loop(){
  potval = analogRead(A0);
  Serial.println(potval);
  delay(200);
}

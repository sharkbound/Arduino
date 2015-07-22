int lightval = analogRead(A0);


void setup(){
  Serial.begin(9600);
  pinMode(A0, 0);
  pinMode(3, 1);
}

void loop(){
  lightval= analogRead(A0);
  Serial.println(lightval, DEC);
  analogWrite(3, lightval);
 delay(50); 
  
}

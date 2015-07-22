int q;

void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);

Serial.begin(9600);
pinMode(10, INPUT);


}

// OE= 13 le= 12 1D=11
void loop(){
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  q = digitalRead(10);
  Serial.print(q, DEC);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  q = digitalRead(10);
  Serial.print(q, DEC);
  delay(1000);
  
 


}


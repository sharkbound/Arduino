int rtol[]={2, 3, 4, 5};
int ltor[]={5, 4, 3, 2};
int count;
int potval=analogRead(A0);

 


  
  


void setup() {
  // put your setup code here, to run once:
pinMode(2, 1);
pinMode(3, 1);
pinMode(4, 1);
pinMode(5, 1);
pinMode(A0, 0);
Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(potval));
  potval= analogRead(A0);
  
  

 



 
  for(count=2; count <= 5; count++){
    digitalWrite(count, 1); 
    delay(potval);
    digitalWrite(count, 0);
    potval= analogRead(A0);
    Serial.println(analogRead(potval));
    
    
  }
 for(count=5; count >= 2; count--){
   digitalWrite(count, 1);
   delay(potval);
   digitalWrite(count, 0);
   potval= analogRead(A0);
   Serial.println(analogRead(potval));
 }
    
 } 

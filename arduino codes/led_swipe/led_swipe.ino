int rtol[]={2, 3, 4, 5};
int ltor[]={5, 4, 3, 2};
int count;
int ledset1=1;
int ledset2=1;
void led1(){
  while(ledset1==1){
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    delay(1000);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    delay(1000);
    ledset1=0;
    ledset2=1;
  }
}
void led2(){
  while(ledset2==1){
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    delay(1000);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    delay(1000);
    ledset2=0;
    ledset1=1;
  }
}
  
  


void setup() {
  // put your setup code here, to run once:
pinMode(2, 1);
pinMode(3, 1);
pinMode(4, 1);
pinMode(5, 1);
}

void loop() {
  

 



 
  for(count=2; count <= 5; count++){
    digitalWrite(count, 1); 
    delay(100);
    digitalWrite(count, 0);
    
    
  }
 for(count=5; count >= 2; count--){
   digitalWrite(count, 1);
   delay(100);
   digitalWrite(count, 0);
 }
    
 } 

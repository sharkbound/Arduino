int count;
int light1;
int light2;
int diferince;
void lr(){
 light1= analogRead(A0);
 light2= analogRead(A1);
}
void lp(){
  Serial.println("photoresistor 1 is");
  Serial.println(light1);
  Serial.println("photoresistor 2 is");
  Serial.println(light2);
}
void difr(){
diferince= light1 - light2;
}
void difw(){
  Serial.println(diferince);
}


void setup(){
pinMode(A0, 0);
pinMode(A1, 0);
pinMode(3, 1);
pinMode(5, 1);
Serial.begin(9600);  
}
void loop(){
  lr();
  difr();
  difw();
  if(diferince >= -280){
    digitalWrite(3, 1);
   
   
   
  }
  else
  {
    digitalWrite(3, 0);
  }
    
    
  if(diferince <= -293){
    digitalWrite(5, 1);
   
    
  }
  else
  {
    digitalWrite(5, 0);
  
   }
   
  
     
  
  
  
  
  
  
  
  
 
}

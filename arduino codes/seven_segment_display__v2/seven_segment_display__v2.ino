int timer = 1000;
int count;
int D1 = 2;
int D2 = 3;
int D3 = 4;
int D4 = 5;
int D5 = 6;
int D6 = 7;
int D7 = 8;
int all_pins;
int array_count;
int array_clear[] = {D1, D2, D6, D7, D3, D5, D4};
int array_0[] = {D1, D2, D3, D4, D5, D7};
int array_1[] = {D7, D5};
int array_2[] = {D1, D7, D6, D3, D4};
int array_H[] = {D2, D7, D3, D5, D6};
int array_E[] = {D1, D2, D6, D3, D4};
int array_L[] = {D2, D3, D4};

 /*
 D1 controls a
 D2 controls f
 D3 controls e
 D4 controls d
 D5 controls c
 D6 controls g
 D7 controls b
 */


void clear() {
    for(count = 0; count <= 6; count++) {
    digitalWrite(array_clear[count], HIGH);
    delay(50);
  }
  
  delay(300);
}

void H(){
      //display H
    for(count = 0; count <= 4; count++){
      digitalWrite(array_H[count], LOW);
    delay(50);
  }
      delay(timer);
}
void E(){
  //display E
   for(count = 0; count <= 4; count++){
      digitalWrite(array_E[count], LOW);
    delay(50);
  }
      delay(timer);
}
void L(){
  //display L
  for(count = 0; count <= 2; count++){
      digitalWrite(array_L[count], LOW);
    delay(50);
  }
      delay(timer);
}
void O(){
  //display 0 
    for(count = 0; count <= 5; count++){
      digitalWrite(array_0[count], LOW);
    delay(50);
  }
      delay(timer);
}

void setup() 
{
  for(all_pins = 2; all_pins <= 9; all_pins++) {
  pinMode(all_pins, OUTPUT);}
  all_pins = 0;
}

void loop() {

          clear();
    
    //display H
    H();
      
     clear();
    
    //displays E
   E();
      
      clear();
    
    L();
      
      clear();
      //delay(300);
    
    //display L
    L();
      
      clear();

    //display 0 
    O();
  
    
}

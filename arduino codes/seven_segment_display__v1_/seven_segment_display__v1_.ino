int timer = 500;
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
int array_clear[] = {D1, D2, D3, D4, D5, D6, D7};
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
   // delay(200);
  }
  delay(300);
}

void setup() 
{
  for(all_pins = 2; all_pins <= 9; all_pins++) {
  pinMode(all_pins, OUTPUT);}
  all_pins = 0;
}

void loop() {
/*  //clear the display 
  for(count = 0; count <= 6; count++) {
    digitalWrite(array_clear[count], HIGH);}
    
  //write "0" to the display
  for(count = 0; count <= 5; count++){
    digitalWrite(array_0[count], LOW);}
    delay(timer);
   
    //writes 1 and 2
    //clear the display
    for(count = 0; count <= 6; count++){
      digitalWrite(array_clear[count], HIGH);}
      
      //set "1" on the display
      for(count = 0; count <= 1; count++){
        digitalWrite(array_1[count], LOW);}
        delay(timer);
        
        //clear the display
        for(count = 0; count <= 6; count++){
            digitalWrite(array_clear[count], HIGH);}
        
        //set "2" on the display
        for(count = 0; count <= 4; count++){
          digitalWrite(array_2[count], LOW);}
          delay(timer);    */
          
          //writes hello to display
          //clear display
          clear();
    
    //display H
    for(count = 0; count <= 4; count++){
      digitalWrite(array_H[count], LOW);}
      delay(timer);
      
     clear();
    
    //displays E
    for(count = 0; count <= 4; count++){
      digitalWrite(array_E[count], LOW);}
      delay(timer);
      
      clear();
    
    //display L
    for(count = 0; count <= 2; count++){
      digitalWrite(array_L[count], LOW);}
      delay(timer);
      
      clear();
      //delay(300);
    
    //display L
    for(count = 0; count <= 2; count++){
      digitalWrite(array_L[count], LOW);}
      delay(timer);
      
      clear();

    //display 0 
    for(count = 0; count <= 5; count++){
      digitalWrite(array_0[count], LOW);}
      delay(timer);
     
    
          
          
          
  
  
  
}

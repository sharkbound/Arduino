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
int array_clear[] = {D1, D2, D3, D4, D5, D6, D7};
int array_0[] = {D1, D2, D3, D4, D5, D7};
int array_1[] = {D7, D5};
int array_2[] = {D1, D7, D6, D3, D4};
int array_H[] = {D2, D7, D3, D5, D6};
int array_E[] = {D1, D2, D6, D3, D4};
int array_L[] = {D2, D3, D4};
int CA = 9;
 /*
 D1 controls a
 D2 controls f
 D3 controls e
 D4 controls d
 D5 controls c
 D6 controls g
 D7 controls b
 */

void setup() 
{
  for(all_pins = 2; all_pins <= 9; all_pins++) {
  pinMode(all_pins, OUTPUT);}
  all_pins = 0;
  /*
  for(count = 0; count <= 4; count++) {
    digitalWrite(array_E[count], LOW);
  }
  */
 digitalWrite(CA, LOW);
 digitalWrite(D1, LOW);
  delay(3000);
  digitalWrite(CA, HIGH);
}

void loop() {
  

     
    
          
     
  
  
}

int count= 50;
int light1;
int light2;
int diferince;
int brightness=0;
int activeLight = 0;
//ambient light lvl
int biasval=0;
//amount the photorestors must be differint to turn led's on
const int lightDiff = 50;
const int LIGHTEN_STEP = 10;
const int DARKEN_STEP = 10;
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
diferince= light1 - light2 + biasval;
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
lr();
difr();
biasval= -diferince;
Serial.println("biasval is");
Serial.println(biasval);
}
void loop(){
  int nextLight;
  lr();
  difr();
  difw();
  //Serial.println(brightness);
  
  // Figure out which light we want on 
  if (diferince < -lightDiff) {
    nextLight = 3;
  } else if (diferince > lightDiff) {
    nextLight = 5;
  } else {
    nextLight = 0;
  }
  
  
  if (activeLight != nextLight) {
    if (brightness <= 0) {
      // faded out all the way, start fading in
      activeLight = nextLight;
    } else {
      // fade out
      brightness -= DARKEN_STEP;
    }
  } else {
    // fade in
    brightness += LIGHTEN_STEP;
  }

  // clamp brightness to the limits of analogWrite
  if (brightness < 0) {
    brightness = 0;
  } else if (brightness > 255) {
    brightness = 255;
  }
  
  analogWrite(activeLight, brightness);
  delay(count);
}

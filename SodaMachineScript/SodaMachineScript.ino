int increase = 10;
int power = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
for (int ii = 0; ii < 255; ii++)
{
 analogWrite(9, power);
 power += increase;
 delay(30);
}


}

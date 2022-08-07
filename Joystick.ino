#define joyX A0
#define joyY A1
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  int xValue = map(analogRead(joyX), 0, 1024, 0, 255);
  int yValue = map(analogRead(joyY), 0, 1024, 0, 255);
 
  //print the values with to plot or view
  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print("\t");
  Serial.print("Y: ");
  Serial.print(yValue);
  Serial.print("\t\n");
}

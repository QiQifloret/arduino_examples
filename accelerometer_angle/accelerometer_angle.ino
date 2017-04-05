const int xPin = A1;
const int yPin = A2;
const int zPin = A3;
//Analog read pins
void setup() {
 Serial.begin(9600); 

 pinMode(xPin, INPUT);
 pinMode(yPin, INPUT);
 pinMode(zPin, INPUT);
}

void loop() {
  int xRead = analogRead(xPin);
  int yRead = analogRead(yPin);
  int zRead = analogRead(zPin);
  float Zero_G = 512;
  float scale= 102.3;

  float x = ((float) xRead - Zero_G)/ scale;
  float y = ((float) yRead - Zero_G)/ scale;
  float z = ((float) zRead - Zero_G)/ scale;
  
  float xAngle = atan(x/(sqrt(sq(y)+sq(z))))*180/PI;
  float yAngle = atan(y/(sqrt(sq(x)+sq(z))))*180/PI;
  float zAngle = atan(z/(sqrt(sq(x)+sq(y))))*180/PI;
  
  Serial.print(xRead);
  Serial.print("\t");
  Serial.print(yRead);
  Serial.print("\t");
  Serial.print(zRead);
  Serial.print("\t");
  Serial.println();
  Serial.print(xAngle);
  Serial.print("\t");
  Serial.print(yAngle);
  Serial.print("\t");
  Serial.print(zAngle);
  Serial.print("\t");
  Serial.println();

  Serial.print("Time: ");
  time = millis();
  //prints time since program started
  Serial.println(time);
  
    
  delay(1000);
} 


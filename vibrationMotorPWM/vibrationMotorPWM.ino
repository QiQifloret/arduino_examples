void setup() {
  pinMode( 6 , OUTPUT);
  pinMode( 3 , OUTPUT);  // Must be a PWM pin
}

void loop() {
  
  analogWrite( 6 , 153 );  // 60% duty cycle
  analogWrite( 3 , 153 );
  delay(500);              // play for 0.5s

  analogWrite( 3 , 0 ); 
  analogWrite( 6 , 0 );    // 0% duty cycle (off)
  delay(4000);             // wait for 4s

}

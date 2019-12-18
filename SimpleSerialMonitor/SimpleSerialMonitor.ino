void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  Serial.print("Pin 13 is: ");
  Serial.println(digitalRead(13));
  delay(1000);
  digitalWrite(13, LOW);
  Serial.print("Pin 13 is: ");
  Serial.println(digitalRead(13));
  delay(1000);
}

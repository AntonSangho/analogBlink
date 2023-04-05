const int ledPin = 6;
const int analogPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(analogPin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  while(analogRead(analogPin) > 100)
  {
    blink();
    Serial.print(".");

  }
  Serial.println(analogRead(analogPin));
  
}

void blink(){
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  delay(100);
}
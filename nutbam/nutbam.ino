#define LED 8
#define BUTTON 5
int LEDstatus=0;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(BUTTON) == HIGH && LEDstatus == 0){
    digitalWrite(LED, HIGH);
    delay(1000);
    LEDstatus = 1;
  }
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == HIGH && LEDstatus == 1){
    digitalWrite(LED, LOW);
    delay(1000);
    LEDstatus = 0;
  }

}

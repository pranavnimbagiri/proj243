int delay_ms=200;
int array_pin[5]={32,33,25,26,27};
int i,j;


void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<5;i++){
    pinMode(array_pin[i],OUTPUT);
    }
    delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<5;i++){
    digitalWrite(array_pin[i],HIGH);
    delay(delay_ms);
    digitalWrite(array_pin[i],LOW);
    }
    for(int j=3;j>=0;j--){
      digitalWrite(array_pin[j],HIGH);
      delay(200);
      digitalWrite(array_pin[j],LOW);
      }
}

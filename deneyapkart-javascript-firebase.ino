void setup(){
  Serial.begin(9600);
  pinMode(D12, INPUT);
  pinMode(D13, INPUT);
}

int b1, b2;

void loop(){
  b1 = digitalRead(D12);
  b2 = digitalRead(D13);
  if (b1){
    Serial.println("button 1");
    do {
      delay(1);
      b1 = digitalRead(D12);
    }while(b1);
  }
  if (b2){
    Serial.println("button 2");
    do {
      delay(1);
      b2 = digitalRead(D13);
    }while(b2);
  }
}

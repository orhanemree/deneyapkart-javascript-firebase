void setup(){
  Serial.begin(9600);
  pinMode(D12, INPUT);
  pinMode(D13, INPUT);
}

int b1, b2, pmetre;
int deger = 500;
bool pokundu = false;

void loop(){
  b1 = digitalRead(D12);
  b2 = digitalRead(D13);
  pmetre = analogRead(A0);
  if (b1){
    Serial.println("button 1");
    do {
      delay(1);
      b1 = digitalRead(D12);
    } while(b1);
  }
  if (b2){
    Serial.println("button 2");
    do {
      delay(1);
      b2 = digitalRead(D13);
    } while(b2);
  }
  if (pmetre < deger and !pokundu){         // potansiyometre değerden küçük olduğu sürece değil,
    pokundu = true;                         // küçük olduğu ilk anda bir kez seri porta yazılıyor.
    Serial.println("potansiyometre istenilen değerden küçük");
  } else if (pmetre >= deger + 100) {       // istenilen değerden tekrar büyük olduğunda pokundu değişkeni sıfırlanıyor,
    pokundu = false;                        // bu da ikinci ve sonraki küçük olma durumlarında da porta yazılmasını sağlıyor.
  }
}

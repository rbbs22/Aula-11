int efeito = 10;

void setup() {
  pinMode(11, OUTPUT); //importante !!! (saída PWM)  
}

void loop() {
  for (int i = 0; i <=255; i++){
  analogWrite(11, i); //PWM (0 a 255)
  delay(efeito);
  }
  for (int i = 255; i >=5; i--){
  analogWrite(11, i); //PWM (0 a 255)
  delay(efeito);
  }
}

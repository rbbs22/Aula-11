/*
 * Exemplo de uso do PWM
 * Exemplo 1: Controle da velocidade de um motor DC
 * @author José de Assis
 */

void setup() {
  pinMode(11, OUTPUT); //importante !!! (saída PWM)  
}

void loop() {
  analogWrite(11, 60); //PWM (0 a 255)
}

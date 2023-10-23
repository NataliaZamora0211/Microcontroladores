//potenciometro de 10kΩ para ver correctamente la variacion de voltaje
int valor = 0; 
float voltaje = 0;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  
  valor = analogRead(A0); 
  voltaje = (valor*5.00/1023.00); 
  Serial.print("valor analogico: ");
  Serial.print(valor);
  Serial.print(" Voltaje: ");
  Serial.print(voltaje);
  Serial.println("V");
}

int valor=0;
void setup() {

  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D4, OUTPUT);
 
  Serial.begin(9600);
  
  Serial.println("Inicio de sketch - valores del potenciometro");
}





void loop() {
  // valor minimo:100
  //valor maximo:1000
  //valor medio:512

  valor = analogRead(A0);

  //Imprimimos por el monitor serie
  Serial.print("El valor es = ");
  Serial.println(valor);

  if(valor >= 512)
  {
      digitalWrite(D7, HIGH);
      digitalWrite(D8, LOW);
      digitalWrite(D4, HIGH);
  } 

  
  
  if (valor <=1000)
  {
      digitalWrite(D7, LOW);
      digitalWrite(D8, HIGH);
      digitalWrite(D4, HIGH);
  }


  

  if (valor <= 512 && valor >=101 )
  {
      digitalWrite(D7, LOW);
      digitalWrite(D8, LOW);
      digitalWrite(D4, HIGH);
        delay(500);
      digitalWrite(D4, LOW);
        delay(500);
    }

  if (valor <=100)
  {
      digitalWrite(D7, LOW);
      digitalWrite(D8, LOW);
      digitalWrite(D4, HIGH);
      delay(500);
      
      digitalWrite(D7, HIGH);
      digitalWrite(D8, HIGH);
      digitalWrite(D4, LOW);
      delay(500);
   }
}

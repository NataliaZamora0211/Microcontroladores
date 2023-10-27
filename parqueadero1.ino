int a=0;
float f=0;
int cost=0;
int cup=0;


void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
}


void loop(){
    a=digitalRead(11);
    f=digitalRead(10);
    cup>=0;
  
  
  if(cup<22){
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
  }
  
  
  else{ 
    digitalWrite(5,LOW);
    digitalWrite(7,HIGH);
  }
  
  
  if(a==HIGH && cup<22){
    cup=cup+1;
    delay(1000);
    Serial.print("\n HAY PARQUEADO ");
    Serial.print(cup);
    Serial.print(" VEHICULOS ");
 

  
    
    if (cup>21){
       Serial.print("\n ¡PARQUEADERO SIN ESPACIO!");
       delay(3000);
    }
  
  }
  
  
  if(f==HIGH&&cup>0){
    cup=cup-1;
    cost=cost+5;
    delay(1000);
    Serial.print("\n ¡GRACIAS BUENA DIA/BUENA TARDE/BUENA NOCHE! +");
    Serial.print(cost);
    Serial.print("K COP/PESOS");
    Serial.print("\n QUEDARON PARQUEADO ");
    Serial.print(cup);
    Serial.print(" VEHICULOS");
  } 
}
int a=0;
float f=0;
float cost=0;
int cup=0;


void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);

}


void loop(){
    a=digitalRead(4);
    f=digitalRead(3);
    cup>=0;
  
  
  if(cup<8){
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
  }
  
  
  else{ 
    digitalWrite(5,LOW);
    digitalWrite(7,HIGH);
  }
  
  
  if(a==HIGH && cup<8){
    cup=cup+1;
    delay(1000);
    Serial.print("\n  Hay cupo ");
    Serial.print(cup);
    Serial.print(" Autos ");
 

  
    
    if (cup>7){
       Serial.print("  No hay espacio  ");
       delay(2000);
    }
  
  }
  
  
  if(f==HIGH&&cup>0){
    cup=cup-1;
    cost=cost+5000;
    delay(1000);
    Serial.print("\n  Siempre a la orden  ");
    Serial.print(cost);
    Serial.print(" Total ");
    Serial.print("   Quedaron parqueados  ");
    Serial.print(cup);
    Serial.print(" Autos");
  } 
}

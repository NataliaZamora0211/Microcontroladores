void setup() {
 pinMode(D8,OUTPUT);
 pinMode(D3, INPUT) ;
 pinMode(D5, OUTPUT) ;
 pinMode(D4,OUTPUT);

}

void loop() {
digitalWrite(D4,LOW);
digitalWrite(D5,LOW);
delay(500);


digitalWrite (D4,HIGH);
digitalWrite (D5,HIGH);
delay(500);

if (digitalRead(D3)==HIGH){
  digitalWrite(D8,LOW);

}
else{digitalWrite(D8,HIGH);
}




}

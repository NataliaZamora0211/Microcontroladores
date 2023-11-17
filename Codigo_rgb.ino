int R=255; 
int G=255;
int B=255;
int red =D7, blue =D5, green = D6;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(115200); 
  }

void loop() {
  
analogWrite(red,R);
analogWrite(blue,B);
analogWrite(green,G);


  if (Serial.available()) {
    R = Serial.parseInt(); 
    G = Serial.parseInt(); 
    B = Serial.parseInt(); 
    if(R>=255){
      R=255;
    }
    if(G>=255){
      G=255;
    }
    if(B>=255){
      B=255;
    }
    
  if (Serial.read() == '\n') {
     Serial.print("\tRojo:");
     Serial.print(R);
     Serial.print("\tVerde:");
     Serial.print(G);
     Serial.print("\tAzul:");
     Serial.println(B); 
    delay(100);
  }
 }
}

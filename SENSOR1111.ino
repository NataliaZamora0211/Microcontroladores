#include "DHT.h"
#define DHTPIN D5 
#define DHTTYPE DHT11



DHT dht(DHTPIN, DHTTYPE);

void setup() {
Serial.begin(9600);
Serial.println(F("DHTxx test!"));

dht.begin();
pinMode(D5,INPUT);
pinMode (D4,OUTPUT);
pinMode (D6,OUTPUT);
}

void loop() {
delay(1000); //Es un sensor lento, por lo que hay que darle tiempo.
float h = dht.readHumidity();
float t = dht.readTemperature()-10.10;

if (isnan(h) || isnan(t)) {
Serial.println(F("Failed to read from DHT sensor!"));
return;
}

Serial.print(F("Humedad: "));
Serial.print(h);
Serial.print(F("% Temperatura: "));
Serial.print(t);
Serial.println(F("°C "));

if ( t >15){
digitalWrite(D4,HIGH);}
else {
digitalWrite (D4,LOW);}

if ( h >30){
digitalWrite(D6,HIGH);}
else {
digitalWrite (D6,LOW);}
}

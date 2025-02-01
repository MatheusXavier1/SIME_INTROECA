#include <Arduino.h>
#include <DHT.h>
#include "connect.h"
#include "sensoriamento.h"
#include "setup.h"

void Temperatura(){
  float LeituraTemperatura = dht.readTemperature();

  Serial.print("Temperatura: ");
  Serial.print(LeituraTemperatura);
  Serial.println("°C");
  sprintf(msg, "%.2f", LeituraTemperatura);
  client.publish("SIME/temperatura", msg);

}

void Umidade(){
  float LeituraUmidade = dht.readHumidity();

  Serial.print("Umidade: ");
  Serial.print(LeituraUmidade);
  Serial.println("%");
  sprintf(msg, "%.2f", LeituraUmidade);
  client.publish("SIME/umidade", msg);
}

void MQ9(){
  int LeituraMQ9 = analogRead(MQ9Pin);

  Serial.print("MQ9: ");
  Serial.println(LeituraMQ9);
  sprintf(msg, "%d", LeituraMQ9);
  client.publish("SIME/MQ9", msg);
}

void MQ135(){
  int LeituraMQ135 = analogRead(MQ135Pin);

  Serial.print("MQ135: ");
  Serial.println(LeituraMQ135);
  sprintf(msg, "%d", LeituraMQ135);
  client.publish("SIME/MQ135", msg);
}

void LDR(){
  int LeituraLDR = analogRead(LDRPin);

  Serial.print("LDR: ");
  Serial.println(LeituraLDR);
  sprintf(msg, "%d", LeituraLDR);
  client.publish("SIME/LDR", msg);
}


#include "setup.h"
#include "connect.h"
#include "sensoriamento.h"
#include <Arduino.h>
#include <DHT.h>

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(MQ9Pin, INPUT);
  pinMode(MQ135Pin, INPUT);
  pinMode(LDRPin, INPUT);

  Serial.begin(115200);
  setup_wifi();
  
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);

  dht.begin();
}
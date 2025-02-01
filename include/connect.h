// connect.h

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

#define MSG_BUFFER_SIZE 50

extern unsigned long lastMsg;  // Apenas declaração
extern char msg[MSG_BUFFER_SIZE];  // Apenas declaração
extern WiFiClient espClient;  // Apenas declaração
extern PubSubClient client;  // Apenas declaração

#define ssid "lilian"
#define password "lm222830"
#define mqtt_server "broker.hivemq.com"

void setup_wifi();
void callback(char* topic, byte* payload, unsigned int length);
void reconnect();
void NotReconnected();

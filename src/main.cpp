  #include <Arduino.h>
  #include <Adafruit_Sensor.h>

  #include "connect.h"
  #include "setup.h"
  #include "sensoriamento.h"

void setup();

  void loop() {
    NotReconnected();
    
    Temperatura();
    Umidade();
    LDR();
    MQ135();
    MQ9();

    delay(2000);
    client.loop();
  }

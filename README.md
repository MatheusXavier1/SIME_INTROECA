# SIME

Estação de monitoramento ambiental com microcontrolador conectado, feita para a Fluxo Consultoria.

## Sensores lidos

- Temperatura e umidade
- Luminosidade (LDR)
- Qualidade do ar (MQ135)
- Gás/CO (MQ9)

## Como funciona

O firmware reconecta automaticamente à rede caso a conexão caia (`NotReconnected`), lê os sensores em loop a cada 2 segundos e publica os dados via cliente MQTT/rede (`client.loop()`).

## Stack

Arduino framework (C++) com [PlatformIO](https://platformio.org/), biblioteca Adafruit Sensor.

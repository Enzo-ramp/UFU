#include <Arduino.h>

int sensorPin = A0; // Pino do LDR
int ledPin = 3;     // Pino do LED
int limiar = 500;   // Valor de corte para acionar o LED (ajuste conforme necessário)

void setup() {
  pinMode(ledPin, OUTPUT); // Define o pino do LED como saída
  Serial.begin(9600);      // Inicia a comunicação serial
}

void loop() {
  int leituraLDR = analogRead(sensorPin); // Lê o valor do LDR
  Serial.print("Leitura do LDR: ");
  Serial.println(leituraLDR);             // Mostra o valor do sensor no monitor serial

  if (leituraLDR < limiar) {
    digitalWrite(ledPin, HIGH);           // Liga o LED
    Serial.println("LED Ligado");         // Mensagem para o LED ligado
  } else {
    digitalWrite(ledPin, LOW);            // Desliga o LED
    Serial.println("LED Desligado");      // Mensagem para o LED desligado
  }

  delay(1000); // Atraso para facilitar a leitura no monitor serial
}

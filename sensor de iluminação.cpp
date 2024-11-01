#include <Arduino.h>

int sensorPin = A0; // Pino analógico onde o LDR está conectado
int ledPin = 3;     // Pino digital onde o LED está conectado
int limiar = 500;   // Valor do limiar para acionar o LED (ajuste conforme necessário)

void setup() {
  pinMode(ledPin, OUTPUT); // Define o pino do LED como saída
  Serial.begin(9600);      // Inicia a comunicação serial para monitoramento
}

void loop() {
  int leituraLDR = analogRead(sensorPin); // Lê o valor de luminosidade do LDR
  Serial.println(leituraLDR);             // Exibe o valor no monitor serial

  if (leituraLDR < limiar) { // Verifica se a leitura está abaixo do limiar
    digitalWrite(ledPin, HIGH); // Liga o LED
  } else {
    digitalWrite(ledPin, LOW);  // Desliga o LED
  }

  delay(100); // Atraso para evitar leituras muito rápidas
}

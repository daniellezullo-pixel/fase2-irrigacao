#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

#define BOTAO_N 32
#define BOTAO_P 14
#define BOTAO_K 26
#define LED 27
#define LDR 34

void setup() {
  Serial.begin(115200);

  pinMode(BOTAO_N, INPUT_PULLUP);
  pinMode(BOTAO_P, INPUT_PULLUP);
  pinMode(BOTAO_K, INPUT_PULLUP);
  pinMode(LED, OUTPUT);

  dht.begin();
}

void loop() {
  float umidade = dht.readHumidity();
  int ph = analogRead(LDR);

  bool N = digitalRead(BOTAO_N) == LOW;
  bool P = digitalRead(BOTAO_P) == LOW;
  bool K = digitalRead(BOTAO_K) == LOW;

  // lógica simples de irrigação
  if (umidade < 40) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  Serial.print("Umidade: ");
  Serial.println(umidade);

  Serial.print("pH (simulado): ");
  Serial.println(ph);

  delay(1000);
}
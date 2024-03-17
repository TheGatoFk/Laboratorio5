int ledPin = 13; // Pin del LED

void setup() {
  pinMode(ledPin, OUTPUT); // Configura el pin del LED como salida
}

void loop() {
  // Enciende el LED durante 3 segundos
  digitalWrite(ledPin, HIGH); // Enciende el LED
  delay(3000); // Espera 3 segundos

  // Apaga el LED durante 1 segundo
  digitalWrite(ledPin, LOW); // Apaga el LED
  delay(1000); // Espera 1 segundo
}


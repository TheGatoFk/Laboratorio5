int ledPin = 13; // Pin del LED

void setup() {
  pinMode(ledPin, OUTPUT); // Configura el pin del LED como salida
  Serial.begin(9600); // Inicializa la comunicación serial 
}

void loop() {
  if (Serial.available() > 0) { 
    char command = Serial.read(); // Lee el comando enviado desde Python
    if (command == 'A') { // Si el comando es 'A', enciende el LED
      digitalWrite(ledPin, HIGH); // Enciende el LED
    } else if (command == 'B') { // Si el comando es 'B', apaga el LED
      digitalWrite(ledPin, LOW); // Apaga el LED
    }
  }
}

// C++ code
//
int tempo = 0;

void setup()
{
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);

  // O ciclo começa com o tempo sendo 0
  tempo = 0;
}

void loop()
{
  if (digitalRead(8) == LOW && tempo < 13) {
    tempo = 13;
    // antecipa o ciclo para permitir travessia
  }
  if (tempo < 13) {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    noTone(2);
  }
  if (tempo >= 13 && tempo < 15) {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    noTone(2);
    // transição veículos de VERDE para AMARELO
  }
  if (tempo >= 15 && tempo < 23) {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    tone(2, 523, 1000); // play tone 60 (C5 = 523 Hz)
    // veículos param e pedestres podem atravessar
  }
  // Isso aqui reinicia o ciclo, não continua
  // contando
  if (tempo >= 23) {
    tempo = 0;
  }
  // Transforma "tempo" em contador
  delay(1000); // Wait for 1000 millisecond(s)
  tempo += 1;
}

int temperatura = 0;

void setup()
// LE DEFINE LA FUNSION DE CADA PIN
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
// DICE QUE SI LA TEMPERATURA ES MENOR A 35 SE PRENDE EL LED Y SI ES MAYOR SE PRENDE EL ROJO
{
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
  if (temperatura < 35) {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  } else {
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  }
  / LE DA EL TIEMPO DE ESPERA
  delay(10); // Delay a little bit to improve simulation performance
}

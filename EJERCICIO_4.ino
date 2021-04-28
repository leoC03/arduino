void setup()
// DEFINE LA FUNCION DEC ADA PIN ACA SON TODOS DE SALIDA
{
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
// HACE QUE SE PRENDA O APAGUE EL LED DEPENDIEDNO SI ESTA EN HIGH QUE AHI ISE PRENDE O EN LOW QUE AHI SE APAGA 
void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  // LE HACE ESPERAR 3 SEGUNDOS 
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  // LE HACE ESPERAR 2 SEGUNDOS
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  // LE HACE ESPERAR 3 SEGUNDOS 
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
   // LE HACE ESPERAR 2 SEGUNDOS
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
}

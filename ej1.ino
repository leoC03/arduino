void setup()

// esto define cada la funcion de cada pin como entrada o salida
  //alfon crack
{
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()

// esto hace que lea y dependiendo la orden se prenda o apague el led, cuando se presione el boton se va a prender el rojo y cuando no lo apretes va a quedar el verde prendido 
{
  if (digitalRead(4) == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  
    // esto le da el tiempo de espera 
  }
  delay(10); // Delay a little bit to improve simulation performance
}

void setup()
// esto defdine los pin como entrada y salida 
{
  pinMode(3, INPUT);
  pinMode(8, INPUT);
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()

/* esto hace que lea y dependiendo la orden se prenda o apague el led,
la alarma y el sensor por ejmplo si el pin 3 esta en high osea el interructor
esta prendido funciona la alarma y el sensor, si el 8 esta en high osea que 
detecta movimiento se dispara la alarma y prenda el led */
{
  if (digitalRead(3) == HIGH) {
    if (digitalRead(8) == HIGH) {
      digitalWrite(2, HIGH);
      //esto LE DA EL TONO Y TIRMPO DE LA ALARMA
      tone(9, 523, 1000); // play tone 60 (C5 = 523 Hz)
      // esto hace que si no se cumpl3e la funcion anterior pase esto
    } else {
      // se apaga el parlante
      noTone(9);
      // se apaga l intewrrruptor 
      digitalWrite(2, LOW);
    }
  }
  // le da el tiempo de espera 
  delay(10); // Delay a little bit to improve simulation performance
}

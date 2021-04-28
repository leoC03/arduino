// define una variable entera como distancia 
int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
// la funsion devuelve un valor proporcional a la distancaia
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
// define la funcion de cada pin
{
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{

 // mide la distancia y la guarda en la variable distancia
  distancia = 0.01723 * readUltrasonicDistance(12, 12);
  if (distancia < 150) {// esto hace que si la distancia es de menor de 150 suene el parlantito
    digitalWrite(11, HIGH);
    // le da el tonpo al parlantito
    tone(13, 548668578, 1000); // play tone 300 (C25 = 548668578 Hz)
  } else {
   // si la distancia es mayor a 150 esto hace que se apague y no suene ningun tono ni ruido 
    digitalWrite(11, LOW);
    noTone(13);
  }
  // le da el tiempo de espera 
  delay(10); // Delay a little bit to improve simulation performance
}

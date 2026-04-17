#include <Servo.h>
Servo s1;
int rainPin = 2;
int lastState;
int pos;

void setup()
{
  pinMode(rainPin, INPUT_PULLUP);  // Stable digital input
  s1.attach(9);
  s1.write(90);                    // Initial position

  lastState = digitalRead(rainPin); // Read initial state
}

void loop()
{
  int currentState = digitalRead(rainPin);

  if (currentState != lastState)
  {
    delay(50); // debounce delay

    if (currentState == LOW)   // Rain detected
    {
      for (pos = 90; pos <= 180; pos++)
      {
        s1.write(pos);
        delay(20);
      }
    }
    else                       // No rain
    {
      for (pos = 180; pos >= 90; pos--)
      {
        s1.write(pos);
        delay(20);
      }
    }

    lastState = currentState;
  }
}
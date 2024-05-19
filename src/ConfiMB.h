#include <Arduino.h>
#include "Servo.h"

int Val;
float LecturaPot;
Servo Base;
void MovBase()
{

    LecturaPot = analogRead(A4);
    Val = map(LecturaPot, 0, 1023, 0, 180);
    Base.write(Val);
    Serial.println(Val);
}
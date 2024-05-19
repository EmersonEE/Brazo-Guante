#include <Arduino.h>
#include "ConfiMB.h"
#include "ConfiM1.h"
#include "ConfiM2.h"
#include "ConfiPi.h"

#define LedM1 5
#define LedM2 4
#define LedM3 3
#define LedM4 2

int movm1Prev = -1;
int movm2Prev = -1;
int movm3Prev = -1;
int movm4Prev = -1;
void LedOnMo1()
{
    if (movm1 != movm1Prev)
    {
        digitalWrite(LedM1, HIGH);
        delay(50);
    }
    else
    {
        digitalWrite(LedM1, LOW);
    }
    movm1Prev = movm1;
}

void LedOnMo2()
{
    if (movm2 != movm2Prev)
    {
        digitalWrite(LedM2, HIGH);
        delay(50);
    }
    else
    {
        digitalWrite(LedM2, LOW);
    }
    movm2Prev = movm2;
}
// Led Para la Base
void LedOnMo3()
{
    if (Val != movm3Prev)
    {
        digitalWrite(LedM3, HIGH);
        delay(50);
    }
    else
    {
        digitalWrite(LedM3, LOW);
    }
    movm3Prev = Val;
}

// Led Para la Pinza
void LedOnMo4()
{
    if (angle != movm4Prev)
    {
        digitalWrite(LedM4, HIGH);
        delay(50);
    }
    else
    {
        digitalWrite(LedM4, LOW);
    }
    movm4Prev = angle;
}
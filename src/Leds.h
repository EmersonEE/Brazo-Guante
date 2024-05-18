#include <Arduino.h>
#include "ConfiM1.h"
#include "ConfiM2.h"

#define LedM1 A1
#define LedM2 A2
#define LedM3 A3
#define LedM4 A4

int movm1Prev = -1;
int movm2Prev = -1;
int movm3Prev = -1;
int movm4Prev = -1;
void LedOnMo1()
{
    if (movm1 != movm1Prev)
    {
        digitalWrite(LedM1, HIGH);
        delay(100);
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
        delay(100);
    }
    else
    {
        digitalWrite(LedM2, LOW);
    }
    movm2Prev = movm2;
}


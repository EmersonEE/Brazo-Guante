#include <Servo.h>
Servo Alcance;
// Posicion inicial
int movm1 = 0;
// Posicion Final

void CompUpMo1()
{
    Serial.println("Motor1 Arriba");
    Serial.println(movm1);
}

void CompDownMo1()
{
    Serial.println("Motor1 Abajo");
    Serial.println(movm1);
}

void UpMo1()
{
    movm1 += 5;
    CompUpMo1();
    if (movm1 > 180)
        movm1 = 180;
    Alcance.write(movm1);
}

void UpLongMo1()
{
    movm1 += 5;
    if (movm1 > 180)
        movm1 = 180;
    CompUpMo1();
    delay(200);
    Alcance.write(movm1);
}
void DownMo1()
{
    movm1 -= 5;
    if (movm1 < 0)
        movm1 = 0;
    CompDownMo1();
    Alcance.write(movm1);
}

void DownLongMo1()
{
    movm1 -= 5;
    if (movm1 < 0)
        movm1 = 0;
    CompDownMo1();
    delay(200);
    Alcance.write(movm1);
}
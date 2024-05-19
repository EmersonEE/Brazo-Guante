#include <Servo.h>
Servo Altura;
// Posicion inicial
int movm2 = 0;
// Posicion Final

void CompUpMo2()
{
    Serial.println("Motor2 Arriba");
    Serial.println(movm2);
}

void CompDownMo2()
{
    Serial.println("Motor2 Abajo");
    Serial.println(movm2);
}

void UpMo2()
{
    movm2 += 5;
    if (movm2 > 180)
        movm2 = 180;
    CompUpMo2();
    Altura.write(movm2);
}

void UpLongMo2()
{
    movm2 += 5;
    if (movm2 > 180)
        movm2 = 180;
    CompUpMo2();
    delay(200);
    Altura.write(movm2);
}
void DownMo2()
{
    movm2 -= 5;
    if (movm2 < 0)
        movm2 = 0;
    CompDownMo2();
    Altura.write(movm2);
}

void DownLongMo2()
{
    movm2 -= 5;
    if (movm2 < 0)
        movm2 = 0;
    CompDownMo2();
    delay(200);
    Altura.write(movm2);
}
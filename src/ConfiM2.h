#define LedM2 A2
// Posicion inicial
int movm2 = 0;
// Posicion Final

void CompUpMo2()
{
    Serial.println("Motor2 Arriba");
    Serial.println(movm2);
    if (movm2 >= 180)
        movm2 = 180;
}

void CompDownMo2()
{
    Serial.println("Motor2 Abajo");
    Serial.println(movm2);
    if (movm2 <= 0)
        movm2 = 0;
}

void UpMo2()
{
    movm2 = movm2 + 5;
    CompUpMo2();
}

void UpLongMo2()
{
    movm2 = movm2 + 5;
    delay(500);
    CompUpMo2();
}
void DownMo2()
{
    movm2 = movm2 - 5;
    CompDownMo2();
}

void DownLongMo2()
{
    movm2 = movm2 - 5;
    delay(500);
    CompDownMo2();
}
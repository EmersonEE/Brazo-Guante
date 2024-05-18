#include <Arduino.h>
#include <OneButton.h>
#include <Servo.h>

// D11, D10, D9, D6 Para los Servos
// D5, D4, D3, D2 Para los Botones
// A0 para el potenciometro
// A1 a A5 para leds

// Motor Alcanse 
OneButton UpM1(5, true);
OneButton DownM1(4, true);

// Motor Altura
OneButton UpM2(3, true);
OneButton DownM2(2, true);

Servo Base;
Servo Alcanse;
Servo Altura;
Servo Pinza;


    void setup()
{
  Base.attach(11);
  Alcanse.attach(10);
  Altura.attach(9);
  Pinza.attach(6);
}

void loop()
{
}

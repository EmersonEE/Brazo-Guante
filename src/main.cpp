#include <Arduino.h>
#include "OneButton.h"
#include <Servo.h>
#include "ConfiM1.h"
#include "ConfiM2.h"

// D11, D10, D9, D6 Para los Servos
// D5, D4, D3, D2 Para los Botones
// A0 para el potenciometro
// A1 a A5 para leds

// Motor Alcance
OneButton UpM1(5, true);
OneButton DownM1(4, true);

// Motor Altura
OneButton UpM2(3, true);
OneButton DownM2(2, true);

Servo Base;
Servo Alcance;
Servo Altura;
Servo Pinza;

void setup()
{
  Serial.begin(115200);
  Base.attach(11);
  Alcance.attach(10);
  Altura.attach(9);
  Pinza.attach(6);
  // Bajar y Subir el Motor 1
  UpM1.attachClick(UpMo1);
  UpM1.attachDoubleClick(UpMo1);
  UpM1.attachDuringLongPress(UpLongMo1);
  DownM1.attachClick(DownMo1);
  DownM1.attachDoubleClick(DownMo1);
  DownM1.attachDuringLongPress(DownLongMo1);

  // Bajar y Subir el Motor 2
  UpM2.attachClick(UpMo2);
  UpM2.attachDoubleClick(UpMo2);
  UpM2.attachDuringLongPress(UpLongMo2);
  DownM2.attachClick(DownMo2);
  DownM2.attachDoubleClick(DownMo2);
  DownM2.attachDuringLongPress(DownLongMo2);
}

void loop()
{
  UpM1.tick();
  DownM1.tick();
  UpM2.tick();
  DownM2.tick();
}

#include <Arduino.h>
#include "OneButton.h"
#include <Servo.h>
#include "Leds.h"

// D11, D10, D9, D6 Para los Servos
// D5, D4, D3, D2 Para los Botones
// A0 para el potenciometro
// A1 a A5 para leds

// Motor Alcance
OneButton UpM1(A0, true);
OneButton DownM1(A1, true);

// Motor Altura
OneButton UpM2(A2, true);
OneButton DownM2(A3, true);


// Tiempo para las multi tarea
unsigned long tiempo1, tiempo2;
unsigned long tiempotranscurrido = 0;
unsigned long tiempotranscurrido2 = 0;

void setup()
{
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LedM1, OUTPUT);
  pinMode(LedM2, OUTPUT);
  pinMode(LedM3, OUTPUT);
  pinMode(LedM4, OUTPUT);

  // Inicializar Servos
  Base.attach(11);
  Alcance.attach(10);
  Altura.attach(9);
  Pinza.attach(6);

  // Subir el Motor 1
  UpM1.attachClick(DownMo1);
  UpM1.attachDoubleClick(DownMo1);
  UpM1.attachDuringLongPress(DownLongMo1);
  // Bajar el Motor 1
  DownM1.attachClick(UpMo1);
  DownM1.attachDoubleClick(UpMo1);
  DownM1.attachDuringLongPress(UpLongMo1);

  // Subir el Motor 2
  UpM2.attachClick(UpMo2);
  UpM2.attachDoubleClick(UpMo2);
  UpM2.attachDuringLongPress(UpLongMo2);
  // Bajar el Motor 2
  DownM2.attachClick(DownMo2);
  DownM2.attachDoubleClick(DownMo2);
  DownM2.attachDuringLongPress(DownLongMo2);
}

void loop()
{

  tiempo1 = millis();
  if (tiempo1 - tiempotranscurrido >= 10)
  {
    tiempotranscurrido = tiempo1;
    UpM1.tick();
    DownM1.tick();
    UpM2.tick();
    DownM2.tick();
    MovBase();
    SensorFlex();
}
  LedOnMo1();
  LedOnMo2();
  LedOnMo3();
  LedOnMo4();
}

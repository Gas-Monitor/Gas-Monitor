#include <LiquidCrystal.h>
#include "HX711.h"

#define cal_fact 293536.f

HX711 scale;
float peso = 0;
float pesoagr = 0;
int media = 20;

#define Delay 1000

float peso_fator = 5;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void sbal();
void balanca();
void displayy();

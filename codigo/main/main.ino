#include <LiquidCrystal.h>
#include "HX711.h"

#define VAZILHAME 13
#define cal_fact 293536.f

HX711 scale;
float peso = 0;
float peso_atual = 0;
int media = 20;

float gasporcent = 0;
float gastotal = 13.0;

#define Delay 1000

float peso_fator = 5;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void porcent();
void sbal();
void balanca();
void displayy();

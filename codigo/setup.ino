void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("peso do fator:");
  lcd.setCursor(0, 1);
  lcd.print(peso_fator);
  delay(Delay);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("fator usado: ");
  lcd.setCursor(0, 1);
  lcd.print(cal_fact);
  delay(Delay);
  sbal();
  }

void displayy() {
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("peso: ");
  lcd.print(String(pesoagr) + " Kg");
  lcd.setCursor(1, 1);
  String imprimir_fact = "fact: " + String((cal_fact * pesoagr) / peso_fator);
  lcd.print(imprimir_fact);
}

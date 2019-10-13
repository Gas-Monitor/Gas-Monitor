void displayy()
{
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("peso: ");
  if(peso_atual < 0){
    peso_atual = peso_atual * -1;
  }
  lcd.print(String(peso_atual) + " Kg");
  lcd.setCursor(1, 1);
  String imprimir_fact = "percent: " + String(gasporcent) + "%";
  lcd.print(imprimir_fact);
}

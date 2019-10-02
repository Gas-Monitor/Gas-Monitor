void sbal() {
  // DT - A1
  // SCK - A0
  scale.begin(A1, A0);

  scale.set_scale(cal_fact);
  scale.tare();
}

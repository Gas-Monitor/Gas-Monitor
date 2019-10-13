void balanca()
{
  scale.power_up();

  int t, i, n, T;
  double val, sum, sumsq, mean;
  float stddev;

  n = media;
  t = millis();
  i = sum = sumsq = 0;

  while (i < n)
  {
    val = ((scale.read() - scale.get_offset()) / scale.get_scale());
    sum += val;
    sumsq += val * val;
    i++;
  }

  t = millis() - t;
  mean = sum / n;
  stddev = sqrt(sumsq / n - mean * mean);
  peso_atual = sum / n, 3;
  peso = stddev, 3;

  scale.power_down();
}

// 计算级数

#include <stdio.h>

double ABSOLUTE(double num);

int main()
{
  int count = 0, n = 2;
  float x = 0.5;
  double term = x, sum = x, epsilon = 1e-6;

  while (ABSOLUTE(term) > epsilon)
  {
    term = -term * x * x * (2 * n - 3) / ((2 * n - 1) * (n - 1));
    sum += term;
    n++;
    count++;
  }

  printf("Sum: %lf, Terms: %d\n", sum, count);
  return 0;
}

double ABSOLUTE(double num)
{
  return num < 0 ? -num : num;
}

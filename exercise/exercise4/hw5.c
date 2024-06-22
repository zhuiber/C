// (5) 已知一元二次方程ax2+bx+c=0,编一程序当从键盘输入a、b、c的值后,计算x 的值。
#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c;
  float d;
  float x1, x2;
  printf("input a, b, c:");
  scanf("%f%f%f", &a, &b, &c);
  d = sqrt(b * b - 4 * a * c);
  x1 = (-b + d) / (2 * a);
  x2 = (-b - d) / (2 * a);
  printf("x1=%.2f, x2=%.2f\n", x1, x2);
  return 0;
}
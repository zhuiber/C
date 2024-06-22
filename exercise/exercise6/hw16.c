// (16) 用迭代法求x =√a。求平方根的选代公式为 : x(n+1) = 1/2 * (x(n) + a/x(n))
// 要求前后两次求出的x的差的绝对值小于10-5

#include <stdio.h>
#include <math.h>

int main()
{
  double x1, x2 = 1;
  float a;
  scanf("%f", &a);
  do
  {
    x1 = x2;
    x2 = 0.5 * (x1 + a / x1);
  } while (fabs(x2 - x1) > 1e-5);
  printf("%lf", x2);
}
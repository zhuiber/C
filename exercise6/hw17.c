// (17) 用牛顿迭代法求方程2x3 - 4x2 + 3x - 6 = 0 在1.5附近的根

#include <stdio.h>
#include <math.h>

int main()
{
  double x0, x1 = 1.5, f, f1;
  do
  {
    x0 = x1;
    f = 2 * pow(x0, 3) - 4 * pow(x0, 2) + 3 * x0 - 6;
    f1 = 6 * pow(x0, 2) - 8 * x0 + 3;
    x1 = x0 - f / f1;
  } while (fabs(x1 - x0) > 1e-5);
  printf("%lf", x1);
}
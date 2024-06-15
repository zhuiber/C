// (18) 用二分法求方程2x3 - 4x2 + 3x - 6 = 0在(-10，10)的根

#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, m, fa, fb, fm;
  a = -10;
  b = 10;
  m = (a + b) / 2;
  fm = 2 * m * m * m - 4 * m * m + 3 * m - 6;
  do
  {
    fa = 2 * a * a * a - 4 * a * a + 3 * a - 6;
    fb = 2 * b * b * b - 4 * b * b + 3 * b - 6;
    if (fa * fm > 0)
      a = m;
    else
      b = m;
    m = (a + b) / 2;
    fm = 2 * m * m * m - 4 * m * m + 3 * m - 6;
  } while (fabs(fm) > 1e-6);

  printf("the solution of the equation is %.2f.\n", m);
  return 0;
}
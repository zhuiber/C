// 编程从键盘输入圆的半径r,计算并输出圆的周长和面积

#include <stdio.h>
#define pi 3.141519

int main()
{
  float r, c, s;
  scanf("%f", &r);
  c = 2 * pi * r;
  s = pi * r * r;
  printf("%f\n%f", c, s);
  return 0;
}
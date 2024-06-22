// (11)编写一个函数int fun(int w).w是一个大于10的整数,若w是n(n>=2)位的整数.
// 函数求出w的后n-1位的数作为函数值返回。例如,w值为5923则数返回923.w值为923则返回23。

#include <stdio.h>

int fun(int w);

int main()
{
  int a;
  a = fun(5923);
  printf("%d", a);
}

int fun(int w)
{
  int n = 0, i = 1;
  if (w < 10)
    return -1;
  else
  {
    while (w >= 10)
    {
      n += i * (w % 10);
      w /= 10;
      i *= 10;
    }
    return n;
  }
}

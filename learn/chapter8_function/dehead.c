// 编写一个函数 int fun(int w), w是一个大于10的整数,
// 若w是n(n >= 2) 位的整数, 函数求出w的后n - 1位的数作为函数值返回。
// 例如, w值为5923, 则函数返回923, 值为923, 则函数返回23。

#include <stdio.h>
#include <math.h> // Include the math library

int fun(int w);

int main()
{
  int w = 5923;
  printf("The result of %d is %d\n", w, fun(w));
  return 0;
}

int fun(int w)
{
  int n = 0;
  int temp = w;
  while (temp != 0)
  {
    temp /= 10; // 5923 -> 592 -> 59 -> 5 -> 0
    n++;
  }
  if (n < 2)
  {
    return -1;
  }
  return w % (int)pow(10, n - 1); // 5923 % 1000 = 923
}
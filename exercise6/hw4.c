// (4) 编程计算a + aa + aaa +…+ aa…a(n个a) 的值, n和a的值由键盘输人。
// 设计思想】用累加和算法, 累加项为 term = term * 10 + a;
// i = 1, 2.…, n;
// term 初值为0.

#include <stdio.h>

int main()
{
  int a, n, sum = 0, i, term = 0;
  scanf("%d%d", &a, &n);
  scanf("", &a);
  for (i = 0; i < n; i++)
  {
    term = term * 10 + a;
    sum += term;
  }
  printf("%d", sum);
  return 0;
}
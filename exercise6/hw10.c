// (10) 从键盘上输入任意正整数, 编程判断该数是否为回文数。
// 所谓回文数, 就是从左到右读这个数与从右到左读这个数是一样的。例如, 12321、4004都是回文数。
// 【设计思想】将该整数按照从最低位到最高位进行分离, 然后重新组合成一整数,
// 再将该整数与原来的整数比较, 如果相等, 则为回文数, 否则不是。

#include <stdio.h>

int main()
{
  int x, t, y = 0;
  scanf("%d", &x);
  t = x;
  while (x > 0)
  {
    y = y * 10 + (x % 10);
    x /= 10;
  }
  t == y ? printf("%d是回文数", t) : printf("%d不是是回文数", t);
}
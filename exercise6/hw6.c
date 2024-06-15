// 利用泰勒级数sin(x) = x - x3/3! + x5/5! ..., 计算sin(x)的值。要求最后1项的绝对值小于10-5并统计出此时累计了多少项
#include <stdio.h>

double ABSOLOTE(double num);

int main()
{
  int n = 1, count = 0;
  float x;
  double sum, term;
  scanf("%f", &x);
  sum = x;
  term = x;
  do
  {
    term = -term * x * x / ((n + 1) * (n + 2));
    sum += term;
    n += 2;
    count++;
  } while (ABSOLOTE(term) >= 1e-5);
  printf("sin(x)=%f,count=%d", sum, count);
  return 0;
}

double ABSOLOTE(double num)
{
  return num < 0 ? -num : num;
}
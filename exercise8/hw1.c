// (1) 设计一个函数, 用来判断一个整数是否为素数

#include <stdio.h>

int isPrime(int x);

int main()
{
  int x = 50;
  if (isPrime(x))
    printf("%d is a prime number", x);
  else
    printf("%d isn't a prime number", x);
}

int isPrime(int x)
{
  int i, frag = 1;
  for (i = 2; i < x; i++)
  {
    if (x % i == 0)
    {
      frag = 0;
    }
  }
  return frag;
}
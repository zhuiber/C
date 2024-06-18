#include <stdio.h>

int count(int n, int k);

int main()
{
  printf("%d", count(10, 2));
  return 0;
}

int count(int n, int k)
{
  int i, j, term, sum = 0;
  for (i = 1; i <= n; i++)
  {
    term = 1;
    for (j = 0; j < k; j++)
      term *= i;
    sum += term;
  }
  return sum;
}

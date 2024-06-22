#include <stdio.h>

int main()
{
  int a[5], *pa, i;
  for (i = 0; i < 5; i++)
    a[i] = i + 1;
  pa = a;
  for (i = 0; i < 5; i++)
    printf("*(pa+%d):%d\n", i, *(pa + i));
  for (i = 0; i < 5; i++)
    printf("*(a+%d):%d\n", i, *(a + i));
  for (i = 0; i < 5; i++)
    printf("pa[%d]:%d\n", i, pa[i]);
  for (i = 0; i < 5; i++)
    printf("a[%d]:%d\n", i, a[i]);
  return 0;
}
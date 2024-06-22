#include <stdio.h>
int main()
{
  int i, j;
  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= i - 1; j++)
      printf(" ");
    for (j = 1; j <= 5 - 2 * (i - 1); j++)
      printf("*");
    printf("\n");
  }

  // 输出每行前的空格
  for (i = 1; i <= 2; i++)
  {
    for (j = 1; j <= 2 - i; j++)
      printf(" ");
    for (j = 1; j <= 2 * i + 1; j++)
      printf("*");
    printf("\n");
  }
  return 0;
}

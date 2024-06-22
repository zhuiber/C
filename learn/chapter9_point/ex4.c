#include <stdio.h>

int main()
{
  int a[5], i, j, t, *p[5];
  for (i = 0; i < 5; i++)
  {
    printf("Input a[%d]:", i);
    scanf("%d", &a[i]);
    p[i] = &a[i];
  }
  for (i = 0; i < 4; i++)
    for (j = i + 1; j < 5; j++)
      if (*p[i] > *p[j])
      {
        t = *p[i];
        *p[i] = *p[j];
        *p[j] = t;
      }
  for (i = 0; i < 5; i++)
    printf("%d ", *p[i]);
  return 0;
}
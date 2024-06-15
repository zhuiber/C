#include <stdio.h>
int main()
{
  int k = 0, sum = 0, g = 0;
  char thisman;

  for (k = 0; k <= 3; k++)
  {
    thisman = 'A' + k;
    sum = (thisman != 'A') + (thisman == 'C') + (thisman == 'D') + (thisman != 'D');
    if (sum == 3)
    {
      printf("This man is %c\n", thisman);
      g = 1;
    }
  }

  if (g != 1)
    printf("Can't found\n ");
  return 0;
}

#include <stdio.h>

int main()
{
  int a, b, c, d;
  for (a = 0; a < 2; a++)
  {
    for (b = 0; b < 2; b++)
    {
      for (c = 0; c < 2; c++)
      {
        for (d = 0; d < 2; d++)
        {
          if (a + b + c + d == 1)
          {
            if (a != 0 && c == 1 && d == 1 && d == 0)
            {
              printf("%d,%d,%d,%d", a, b, c, d);
            }
            if (a == 0 && c != 1 && d == 1 && d == 0)
            {
              printf("%d,%d,%d,%d", a, b, c, d);
            }
            if (a == 0 && c == 1 && d != 1 && d == 0)
            {
              printf("%d,%d,%d,%d", a, b, c, d);
            }
            if (a == 0 && c == 1 && d == 1 && d != 0)
            {
              printf("%d,%d,%d,%d", a, b, c, d);
            }
          }
        }
      }
    }
  }
}
#include <stdio.h>
void swap(int *p1, int *p2)
{
  int p;
  p = *p1;
  *p1 = *p2;
  *p2 = p;
}
int main()
{
  int a = 1, b = 2, *p_1, *p_2;
  p_1 = &a;
  p_2 = &b;
  if (a < b)
    swap(p_1, p_2);
  printf("\n%d,%d\n", a, b);
  return 0;
}
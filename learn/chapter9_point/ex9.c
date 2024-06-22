#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *alltrim(char *str);

int main()
{
  char str[20] = "   Good Bye!   ";
  printf("%s\n", alltrim(str));
  return 0;
}

char *alltrim(char *str)
{
  char *p, *pstart, *pend;
  int i, size;
  pstart = str;
  while (*pstart == ' ')
    pstart++;
  pend = pstart + strlen(str) - 1;
  while (pend > pstart && *pend == ' ')
    pend--;
  size = pend >= pstart ? pend - pstart + 2 : 1;
  p = (char *)malloc(size * sizeof(char));
  for (i = 0; pstart <= pend; i++)
    p[i] = *pstart++;
  p[i] = '\0';
  return p;
}

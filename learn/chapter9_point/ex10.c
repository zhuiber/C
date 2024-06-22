#include <stdio.h>
#include <string.h>

char *alltrim(char *str);

int main()
{
  char str[20] = "   Good Bye!   ";
  alltrim(str);
  printf("%s\n", str);
  return 0;
}

char *alltrim(char *str)
{
  char *pstart, *pend;
  int i;
  pstart = str;
  while (*pstart == ' ')
    pstart++;
  pend = pstart + strlen(str) - 1;
  while (pend > pstart && *pend == ' ')
    pend--;
  for (i = 0; pstart <= pend; i++)
    str[i] = *pstart++;
  str[i] = '\0';
  return str;
}
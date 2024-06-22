#include <stdio.h>
#include <string.h>

void alltrim(char *psstr, char *pdstr);

int main()
{
  char *pstr, str[20];
  pstr = "   Good Bye!   ";
  alltrim(pstr, str);
  printf("%s\n", str);
  return 0;
}

void alltrim(char *psstr, char *pdstr)
{
  char *pstart, *pend;
  pstart = psstr;
  while (*pstart == ' ')
    pstart++;
  pend = pstart + strlen(pstart) - 1;
  while (pend > pstart && *pend == ' ')
    pend--;
  while (pstart <= pend)
    *pdstr++ = *pstart++;
  *pdstr = '\0';
}
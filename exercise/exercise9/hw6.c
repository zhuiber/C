// (6) 编写一个函数fun(), 它的功能是 : 删除字符串中的数字字符。例如, 输入字符串 : 48CTYP9E6.则输出 : CTYPE.

#include <stdio.h>
#include <string.h>

void fun(char *s);

int main()
{
  char s[20] = "48CTYP9E6";
  fun(s);
  printf("%s", s);
}

void fun(char *s)
{
  char *pstr;
  for (pstr = s; *pstr != '\0'; pstr++)
  {
    while (*pstr >= '0' && *pstr <= '9')
      strcpy(pstr, pstr + 1);
  }
}
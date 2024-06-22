// (4) 编写一个取某字符串子串的函数 char *substr(char *s, int startloc, int len),
// 其中, s为字符串, startloc为起始位置(0表示第一个字符的位置), len为子串的长度。要求返回值为求得的子串。
// 例如, 调用substr("12345678", 0, 4), 求得的子串为 "1234"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substr(char *s, int startloc, int len);

int main()
{
  char s[10] = "12345678";
  char *sub = substr(s, 0, 4);
  printf("%s\n", sub);
  free(sub);
}

char *substr(char *s, int startloc, int len)
{
  char *result = (char *)malloc((len + 1) * sizeof(char));
  for (int i = 0; i < len; i++)
    result[i] = s[startloc + i];
  result[len] = '\0';
  return result;
}

// (3) 编程判断输入的一串字符是否为“回文”。所谓“回文”, 是指顺读和倒读都一样的字符串。例如, "level""ABCCBA"都是回文。

#include <stdio.h>
#include <string.h>

int main()
{
  char str[10] = "abc", *pStart, *pEnd;
  pStart = str;
  pEnd = str + strlen(str) - 1;
  while (*pStart == *pEnd && pStart <= pEnd)
  {
    pStart++;
    pEnd--;
  }
  if (pStart < pEnd)
    printf("no\n");
  else
    printf("yes\n");
  return 0;
}
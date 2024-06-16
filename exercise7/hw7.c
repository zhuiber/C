// (7) 编写一程序实现将用户输入的一字符串以反向形式输出。例如, 输入的字符串是abcdefg, 输出为 gfedcba.

#include <stdio.h>
#include <string.h>

#define n 80

int main()
{
  char a[n];
  int i;
  gets(a);
  for (i = strlen(a) - 1; i >= 0; i--)
  {
    printf("%c", a[i]);
  }
}
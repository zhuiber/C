// (8) 编写一程序实现将用户输入的一字符串中所有的字符 'c'删除, 并输出结果

#include <stdio.h>
#include <string.h>
#define n 80
int main()
{
  char a[n], b[n];
  int i, j;
  gets(a);
  for (i = 0, j = 0; i < strlen(a); i++)
  {
    if (a[i] != 'c')
      b[j++] = a[i];
  }
  b[j] = '\0';
  strcpy(a, b);
  printf("%s", a);
}
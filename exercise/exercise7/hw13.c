// (13) 从键盘输入一个字符串a, 并在a串中的最大元素后边插入字符串b(b[] = "ab") 试编程

#include <stdio.h>
#include <string.h>

int main()
{
  char a[50] = "how are you?", b[] = "ab", i, max = 0;
  for (i = 0; i < strlen(a); i++)
    if (a[i] > a[max])
      max = i;

  for (i = strlen(a) - 1; i > max; i--)
    a[i + strlen(b)] = a[i];

  for (i = 0; i < strlen(b); i++)
    a[max + 1 + i] = b[i];

  printf("%s", a);
}
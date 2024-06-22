// (7) 编写一个函数 totsubstrnum(char *str，char *substr), 它的功能是 : 统计子字符串subst在字符串str中出现的次数。

#include <stdio.h>
#include <string.h>

int totsubstrnum(char *str, char *substr);

int main()
{
  char str[80] = "do you like me? Yes, I do.";
  char substr[80] = "do";
  int n = totsubstrnum(str, substr);
  printf("%d", n);
}
int totsubstrnum(char *str, char *substr)
{
  int i = 0, count = 0, len1, len2;
  len1 = strlen(str);
  len2 = strlen(substr);
  while (i < len1 - len2)
  {
    if (strncmp(str + i, substr, len2) == 0)
    {
      count++;
      i += len2;
    }
    else
      i++;
  }
  return count;
}

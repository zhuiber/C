// 编写一函数StrLoc, 其功能是求得一字符串strl在另一字符串str2中首次出现的位置,
// 如果 str1 不在 str2 中,则返回一1。例如,假设 strl为"do",str2 为"how do you do?",则返回值为4

#include <stdio.h>

int StrLoc(const char *str1, const char *str2);

int main()
{
  char str1[] = "do";
  char str2[] = "how do you do?";
  printf("The position of %s in %s is %d\n", str1, str2, StrLoc(str1, str2));
  return 0;
}

int StrLoc(const char *str1, const char *str2)
{
  int i, j;
  for (i = 0; str2[i] != '\0'; i++)
  {
    for (j = 0; str1[j] != '\0'; j++)
    {
      if (str1[j] != str2[i + j])
      {
        break;
      }
    }
    if (str1[j] == '\0')
    {
      return i + 1;
    }
  }
  return -1;
}
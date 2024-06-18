// (6) 编写一函数Strloc(), 其功能是求得一字符串str1在另一字符串str2中的首次出现的位置,
// 如果 str1 不在 str2 中, 则返回一1。例如, 假设 strl 为 "do", str2 为 "how do you do?", 则返回值为4。

#include <stdio.h>
#include <string.h>
int Strloc(char str1[], char str2[]);

int main()
{
  char str1[] = "do";
  char str2[] = "how do you do?";
  printf("%d", Strloc(str1, str2));
}

int Strloc(char str1[], char str2[])
{
  int i, len1, len2;
  len1 = strlen(str1);
  len2 = strlen(str2);
  if (len1 > len2)
    return -1;
  for (i = 0; i <= len2 - len1; i++)
    if (strncmp(str1, str2 + i, len1) == 0)
      return i;
  return -1;
}
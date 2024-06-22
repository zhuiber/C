// (10) 不用strcat函数编程实现字符串连接函数strcat的功能, 将字符串srcStr 连接到字符串dstStr的尾部

#include <stdio.h>
#define N 10

int main()
{
  char dstStr[N] = "a", srcStr[N] = "bc";
  int i, j;
  for (i = 0; dstStr[i] != '\0'; i++)
    ;
  for (j = 0; srcStr[j] != '\0'; j++)
    dstStr[i + j] = srcStr[j];
  dstStr[i + j] = '\0';
  printf("%s\n", dstStr);
  return 0;
}
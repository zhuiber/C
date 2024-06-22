// 编制函数JsSort(), 其函数的功能是 :
// 对字符串变量的下标为奇数的字符按其ASCII值从大到小的顺序进行排序, 排序后的结果仍存入字符串数组中。
// 例如 : 位置 01234567 源字符串 abcdefgh 处理后字符串ahcfedgb

#include <stdio.h>
#include <string.h>

void JsSort(char *str);

int main()
{
  char str[] = "abcdefgh";
  JsSort(str);
  printf("%s\n", str);
  return 0;
}

void JsSort(char *str)
{
  char temp;
  int length = strlen(str);
  for (int i = 1; i < length; i += 2)
  {
    for (int j = i + 2; j < length; j += 2)
    {
      if (str[i] < str[j])
      {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
}

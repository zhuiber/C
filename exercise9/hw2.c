#include <stdio.h>

void MyStrcat(char *dstStr, char *srcStr)
{
  // Move dstStr pointer to the end of the string
  while (*dstStr != '\0')
    dstStr++;

  // Copy srcStr to dstStr
  while (*srcStr != '\0')
  {
    *dstStr = *srcStr;
    dstStr++;
    srcStr++;
  }

  // Add null terminator to the concatenated string
  *dstStr = '\0';
}

int main()
{
  char a[10] = "abc", b[10] = "de";
  MyStrcat(a, b);
  printf("%s", a);

  return 0;
}

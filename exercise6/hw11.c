// (11) 用1元5角人民币兑换5分、2分和1分的硬币(每种都要有) 共100枚, 问共有几种兑换方案 ? 每种方案各换多少枚硬币 ?

#include <stdio.h>

int main()
{
  int n1, n2, n3, n = 0;
  for (n1 = 0; n1 < 20; n1++)
  {
    for (n2 = 0; n2 < 50; n2++)
    {
      for (n3 = 0; n3 < 100; n3++)
      {
        if (n1 * 5 + n2 * 2 + n3 == 150 && n1 + n2 + n3 == 100)
        {
          n++;
          printf("%d,%d,%d\n", n1, n2, n3);
                }
      }
    }
  }
  printf("%d", n);
}
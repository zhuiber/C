// 汉诺塔问题
#include <stdio.h>

void my_hanoi(int n, char source, char auxiliary, char destination)
{
  if (n == 1)
  {
    printf("Move disk 1 from %c to %c\n", source, destination);
    return;
  }

  my_hanoi(n - 1, source, destination, auxiliary);
  printf("Move disk %d from %c to %c\n", n, source, destination);
  my_hanoi(n - 1, auxiliary, source, destination);
}

int main()
{
  int n;
  printf("Enter the number of disks: ");
  scanf("%d", &n);

  printf("Steps to solve the Hanoi problem:\n");
  my_hanoi(n, 'A', 'B', 'C');

  return 0;
}
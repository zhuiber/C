// (5) 设有n个人围坐一圈并按顺时针方向从1到n编号,
// 从第s个人开始进行1 ~ m 的报数, 报数到第m个人, 此人出圈, 再从他的下一个人重新开始1 ~m的报数,
// 如此进行下去直到所有的人都出圈为止。现要求按出圈次序, 每10人一组, 给出这n个人的顺序表请编制函数Josegh() 实现此功能。
#include <stdio.h>

// Function to implement the Josephus problem without using pointers
void Josephus(int n, int s, int m)
{
  // Create an array to hold the indices of people
  int people[1000]; // Assuming the maximum number of people is 1000
  for (int i = 0; i < n; i++)
  {
    people[i] = i + 1; // Initialize the array with people numbered from 1 to n
  }

  int index = s - 1; // Start at the s-th person (0-indexed)
  int count = n;     // Number of people left

  while (count > 0)
  {
    // Print group header every 10 people
    if ((n - count) % 10 == 0)
    {
      printf("\nGroup %d:\n", (n - count) / 10 + 1);
    }

    // Move m-1 steps forward (because index is already at one person)
    for (int i = 1; i < m; i++)
    {
      index = (index + 1) % n;
      while (people[index] == 0)
      { // Skip eliminated people
        index = (index + 1) % n;
      }
    }

    // Print the person who is eliminated
    printf("%d ", people[index]);
    people[index] = 0; // Mark the person as eliminated

    // Move to the next person
    index = (index + 1) % n;
    while (people[index] == 0 && count > 1)
    { // Skip eliminated people
      index = (index + 1) % n;
    }

    count--; // Decrease the count of people left
  }

  printf("\n");
}

int main()
{
  int n, s, m;

  // Read inputs
  printf("Enter the number of people (n): ");
  scanf("%d", &n);
  printf("Enter the starting position (s): ");
  scanf("%d", &s);
  printf("Enter the counting number (m): ");
  scanf("%d", &m);

  // Call the Josephus function
  Josephus(n, s, m);

  return 0;
}

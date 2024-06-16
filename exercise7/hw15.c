// (15) 下面是一个5X5阶的螺旋方阵。试编程打印出此形式的 n * n (n < 10) 阶的方阵(顺时针方向旋进)。
#include <stdio.h>

#define MAX_SIZE 10

void printSpiralMatrix(int n)
{
  int matrix[MAX_SIZE][MAX_SIZE] = {0};
  int value = 1;
  int startRow = 0, endRow = n - 1;
  int startCol = 0, endCol = n - 1;

  while (startRow <= endRow && startCol <= endCol)
  {
    // Fill the top row
    for (int i = startCol; i <= endCol; i++)
    {
      matrix[startRow][i] = value++;
    }
    startRow++;

    // Fill the right column
    for (int i = startRow; i <= endRow; i++)
    {
      matrix[i][endCol] = value++;
    }
    endCol--;

    // Fill the bottom row
    if (startRow <= endRow)
    {
      for (int i = endCol; i >= startCol; i--)
      {
        matrix[endRow][i] = value++;
      }
      endRow--;
    }

    // Fill the left column
    if (startCol <= endCol)
    {
      for (int i = endRow; i >= startRow; i--)
      {
        matrix[i][startCol] = value++;
      }
      startCol++;
    }
  }

  // Print the matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%3d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int n;

  // Ensure the input size is less than 10
  do
  {
    printf("Enter the size of the matrix (n < 10): ");
    scanf("%d", &n);
  } while (n >= 10);

  printSpiralMatrix(n);

  return 0;
}

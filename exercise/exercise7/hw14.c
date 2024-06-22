// (14) 找出一个二位数组中的鞍点的位置, 即该位置上的元素在该行上最大, 在该列上最小。
// 如果有, 输出其所在的行、列号, 如果没有, 则输出提示信息

#include <stdio.h>
#define ROWS 4
#define COLS 4

void findSaddlePoint(int arr[ROWS][COLS], int rows, int cols);

int main()
{
  int arr[ROWS][COLS] = {
      {15, 3, 6, 1},
      {81, 10, 17, 5},
      {114, 10, 16, 9},
      {91, 11, 13, 2}};

  findSaddlePoint(arr, ROWS, COLS);

  return 0;
}

void findSaddlePoint(int arr[ROWS][COLS], int rows, int cols)
{
  int saddlePointFound = 0;

  for (int i = 0; i < rows; i++)
  {
    int rowMax = arr[i][0];
    int colIndex = 0;
    for (int j = 1; j < cols; j++)
    {
      if (arr[i][j] > rowMax)
      {
        rowMax = arr[i][j];
        colIndex = j;
      }
    }

    int isSaddlePoint = 1;
    for (int k = 0; k < rows; k++)
    {
      if (arr[k][colIndex] < rowMax)
      {
        isSaddlePoint = 0;
        break;
      }
    }

    // If a saddle point is found
    if (isSaddlePoint)
    {
      printf("Saddle point found at row %d, column %d\n", i, colIndex);
      saddlePointFound = 1;
    }
  }

  if (!saddlePointFound)
  {
    printf("No saddle point found in the array\n");
  }
}
// (9) 编写一个程序用于计算任意大的两整数之差(提示 : 大整数用字符串来表示)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to remove leading zeros
void removeLeadingZeros(char *str)
{
  int len = strlen(str);
  int i, j = 0;

  while (str[j] == '0' && j < len - 1)
  {
    j++;
  }

  for (i = 0; j < len; i++, j++)
  {
    str[i] = str[j];
  }
  str[i] = '\0';
}

// Function to find the difference between two large integers
void subtractLargeNumbers(char *num1, char *num2, char *result)
{
  int len1 = strlen(num1);
  int len2 = strlen(num2);
  int borrow = 0;
  int i, j, k = 0;

  // Reverse the numbers for easier calculation
  char *a = strrev(strdup(num1));
  char *b = strrev(strdup(num2));

  for (i = 0; i < len2; i++)
  {
    int diff = (a[i] - '0') - (b[i] - '0') - borrow;
    if (diff < 0)
    {
      diff += 10;
      borrow = 1;
    }
    else
    {
      borrow = 0;
    }
    result[k++] = diff + '0';
  }

  for (; i < len1; i++)
  {
    int diff = (a[i] - '0') - borrow;
    if (diff < 0)
    {
      diff += 10;
      borrow = 1;
    }
    else
    {
      borrow = 0;
    }
    result[k++] = diff + '0';
  }

  result[k] = '\0';

  // Reverse the result to get the final answer
  strrev(result);
  removeLeadingZeros(result);

  // Free the allocated memory
  free(a);
  free(b);
}

// Function to compare two numbers
int compareNumbers(char *num1, char *num2)
{
  int len1 = strlen(num1);
  int len2 = strlen(num2);

  if (len1 > len2)
    return 1;
  if (len1 < len2)
    return -1;

  for (int i = 0; i < len1; i++)
  {
    if (num1[i] > num2[i])
      return 1;
    if (num1[i] < num2[i])
      return -1;
  }

  return 0;
}

int main()
{
  char num1[1001], num2[1001], result[1002];

  printf("Enter the first large number: ");
  scanf("%s", num1);

  printf("Enter the second large number: ");
  scanf("%s", num2);

  // Determine which number is larger
  int cmp = compareNumbers(num1, num2);

  if (cmp == 0)
  {
    printf("0\n");
  }
  else if (cmp > 0)
  {
    subtractLargeNumbers(num1, num2, result);
    printf("Difference: %s\n", result);
  }
  else
  {
    subtractLargeNumbers(num2, num1, result);
    printf("Difference: -%s\n", result);
  }

  return 0;
}

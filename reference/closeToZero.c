#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 7
int main()
{
  int array[SIZE] = {1, 2, 3, 4, 5, -6, -7};
  int i, j, minSum = array[0] + array[1], currentSum;

  for (i = 0; i < SIZE; i++)
  {
    for (j = i + 1; j < SIZE; j++)
    {
      currentSum = array[i] + array[j];
      printf("current - %d + %d = %d\n", array[i], array[j], currentSum);
      if (abs(currentSum) < abs(minSum))
        minSum = array[i] + array[j];
    }
  }
  printf("min sum - %d\n", minSum);
}
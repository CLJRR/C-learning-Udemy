#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int sumOfArray(int *pArray)
{
  int i, sum = 0;
  for (i = 0; i < SIZE; i++)
    sum = sum + pArray[i];
  return sum;
}
int main()
{
  int *p, arraySize = SIZE, result;
  int arr[SIZE] = {1, 3, 10};
  result = sumOfArray(arr);
  printf("%d", result);
}

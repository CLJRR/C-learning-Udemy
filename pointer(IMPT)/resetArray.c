#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
void printArray(int *pArray)
{
  int i;
  for (i = 0; i < SIZE; i++)
  {
    printf("%d ", pArray[i]);
  }
  printf("\n");
}
void resetArray(int *pArray)
{
  int i;
  for (i = 0; i < SIZE; i++)
  {
    pArray[i] = 0;
  }
}
int main()
{
  int array[SIZE] = {1, 2, 3, 4, 5, 6, 7};
  printf("before:\n");
  printArray(array);
  resetArray(array);
  printf("after:\n");
  printArray(array);
}
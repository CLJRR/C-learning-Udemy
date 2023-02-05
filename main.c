#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
int main()
{
  int array[SIZE], i, trueFalse = 0;
  for (i = 0; i < SIZE; i++)
  {
    printf("please enter array value %d:  ", i + 1);
    scanf("%d", &array[i]);
  }
  for (i = 1; i < SIZE - 1; i++)
  {
    if (array[i - 1] * array[i + 1] == array[i])
    {
      printf("good neighbours\n");
      return 0;
    }
  }
  printf("no good neighbours\n");
  return 0;
}
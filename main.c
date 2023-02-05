#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
int main()
{
  // scanf("%d", &SIZE);
  int array[SIZE], i, trueFalse = 0;
  for (i = 0; i < SIZE; i++)
  {
    printf("please enter array value %d:  ", i + 1);
    scanf("%d", &array[i]);
  }
  for (i = 1; i < SIZE - 1; i++)
  {
    if (array[i - 1] * array[i + 1] == array[i])
      trueFalse = 1;
  }
  if (trueFalse == 1)
    printf("good neighbours\n");
  else
    printf("no good neighbours\n");
}
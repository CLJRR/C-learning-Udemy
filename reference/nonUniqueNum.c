#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
  int counter = 0, i, j;
  int values[SIZE] = {2, 2, 1, 1, 5, 6, 7, 8, 9, 10};
  for (i = 0; i < SIZE; i++)
  {
    for (j = 0; j < SIZE; j++)
    {
      if (i == j)
        continue;
      if (values[i] == values[j])
      {
        if (j > i)
          counter++;
        break;
      }
    }
  }
  printf("Non-Unique: %d", counter);
}
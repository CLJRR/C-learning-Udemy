#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
  int counter = 0, i, j;
  int values[SIZE] = {5, 7, 3, 4, 5, 6, 85, 9, 10, 3};
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
  printf("%d", counter);
}
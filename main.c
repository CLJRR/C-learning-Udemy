#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, min1 = 0, min2 = 0, temp, arrayCopy[7], array[7] = {1, 2, 3, 4, 5, 6, 7};

  for (i = 0; i < 7; i++)
  {
    arrayCopy[i] = abs(array[i]);
  }
  temp = arrayCopy[0];
}
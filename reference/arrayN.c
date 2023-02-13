#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
  int i, n = 2, temp;
  int array[SIZE] = {231, 852, 273, 442, 575};
  for (i = 0; i < SIZE - n; i++)
  {
    array[i] -= array[i + n];
    array[i + n] += array[i];
    array[i] -= array[i + n];
    array[i] = array[i] * -1;
  }
  for (i = 0; i < 5; i++)
  {
    printf("%d ", array[i]);
  }
}
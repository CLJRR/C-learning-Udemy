#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
  int i, result = 0, array[SIZE]; // 0- really sorted, 1- sorted, 2- not sorted
  for (i = 0; i < SIZE; i++)
  {
    printf("please enter value %d / %d: ", i + 1, SIZE);
    scanf("%d", &array[i]);
  }
  for (i = 1; i < SIZE; i++)
  {

    if (array[i - 1] >= array[i])
    {
      if (array[i - 1] == array[i])
      {
        result = 1;
      }
      else
      {
        printf("not sorted");
        return 0;
      }
    }
  }
  if (result == 0)
    printf("really sorted");
  else
    printf("sorted");
}

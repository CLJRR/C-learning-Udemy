#include <stdio.h>
#include <stdlib.h>
int main()
{
  int arr[3] = {1,
                3,
                2};
  for (int i = 0; i < 3; i++)
  {
    int strength = arr[i];
    int n = i;
    for (int j = i + 1; j < 3; j++)
    {
      if (arr[j] > strength)
      {
        strength = arr[j];
        n = j;
      }
    }
    if (n != i)
    {
      int temp = arr[n];
      arr[n] = arr[i];
      arr[i] = temp;
    }
  }
  for (int i = 0; i < 3; i++)
    printf(" %d ", arr[i]);
}
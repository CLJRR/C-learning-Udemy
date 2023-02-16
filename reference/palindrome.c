#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
int main()
{
  int i;
  int array[SIZE] = {5, 3, 4, 1, 4, 3, 5};
  for (i = 0; i < SIZE / 2; i++)
  {
    if (array[i] != array[SIZE - 1 - i])
    {
      printf("not palindrome");
      return 0;
    }
  }
  printf("palindrome");
}

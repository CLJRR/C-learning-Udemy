#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i, currentValue, oddSum;
  printf("please enter 'n', number of seq");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("please enter value %d / %d: ", i, n);
    scanf("%d", &currentValue);
    if (currentValue % 2 == 1)
      oddSum += currentValue;
  }
  printf("sum of odd numbers = %d", oddSum);
}
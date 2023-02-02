#include <stdio.h>
#include <stdlib.h>
int perfectNumber(int num)
{
  int result = 1, i;
  if (num == 1)
    return 1;
  for (i = 2; ii++)
}
int main()
{
  int input;
  printf("please enter a number");
  scanf("%d", &input);

  if (perfectNumber(input) == 1)
    printf("perfect number");
  else
    printf("Not perfect number");
}
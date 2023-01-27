
#include <stdio.h>
#include <stdlib.h>

int factorial(int input)
{
  int i, result = 1;

  for (i = 1; i <= input; i++)
  {
    result = result * i;
  }
  return result;
}
int main()
{
  int input;
  printf("please enter n: ");
  scanf("%d", &input);

  printf("Fact (%d) = %d", input, factorial(input));
}
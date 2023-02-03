#include <stdio.h>
#include <stdlib.h>

int divisor(int input)
{
  int i, result = input;
  if (input == 1)
    return 1;
  else if (input % 2 == 0)
  {
    for (i = (input / 2); i > 2; i++)
    {
      result = result + i;
    }
  }
  else
  {
    for (i = (input / 2); i > 1; i++)
    {
      result = result + i;
    }
  }
}
int main()
{
  int input;
  printf("please enter number");
  scanf("%d", &input);
  divisor(input);
}
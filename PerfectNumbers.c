#include <stdio.h>
#include <stdlib.h>
int perfectNumber(int num)
{
  int result = 1, i;
  if (num == 1)
    return 1;
  for (i = 2; i * i < num; i++)

    if (num % i == 0)
      result += i + (num / i);

  if (i * i == num)
    result += i;

  return result;
}
int main()
{
  int input;
  printf("please enter a number: ");
  scanf("%d", &input);

  if (perfectNumber(input) == input)
    printf("perfect number");
  else
    printf("Not perfect number");
}
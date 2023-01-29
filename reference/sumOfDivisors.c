#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sumOfDivisors(int num)
{
  int i, sum = 1;
  if (num == 1)
    return 1;
  for (i = 2; i * i < num; i++)
  {
    if (num % i == 0)
      sum = sum + i + num / i;
  }
  if (i * i == num)
    sum = sum + i;
  return sum + num;
}

int main()
{
  int input;
  printf("please insert a number");
  scanf("%d", &input);
  printf("%d", sumOfDivisors(input));
}
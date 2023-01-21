#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long nineNumberSeq(int number)
{
  int i;
  long result = 0;
  for (i = 1; i <= number; i++)
  {
    result = result * 10 + 9;
  }
  return result;
}
long mainSeq(int number)
{
  int i;
  long result = 0;

  if (number <= 9)
  {
    for (i = 1; i <= number; i++)
    {
      result = result * 10 + i;
    }
  }
  else
    result = nineNumberSeq(number);
  return result;
}
int main()
{
  int number;
  printf("enter num:  ");
  scanf("%d", &number);

  printf("%ld", mainSeq(number));
}
// 5 - 5 + 40, 45 + 300
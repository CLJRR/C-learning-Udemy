#include <stdio.h>
#include <stdlib.h>

int maxbetween()
{
  int num1, num2, num3;
  printf("Enter num 1 ,num 2, num 3:  ");
  scanf("%d%d%d", &num1, &num2, &num3);
  if (num1 > num2)
    if (num1 > num3)
      return num1;
    else
      return num3;
  else if (num2 > num3)
    return num2;
  else
    return num3;
}
int main()
{
  int max;
  max = maxbetween();
  printf("max:  %d", max);
}
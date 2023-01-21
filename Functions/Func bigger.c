#include <stdio.h>
#include <stdlib.h>

void ifelse(int num1, int num2)
{
  if (num1 > num2)

    printf("%d is bigger than %d", num1, num2);
  else
    printf("%d is bigger than %d", num2, num1);
}
int main()
{
  int x, y;
  printf("please enter number 1:  ");
  scanf("%d", &x);
  printf("please enter number 2:  ");
  scanf("%d", &y);
  ifelse(x, y);
  return 0;
}

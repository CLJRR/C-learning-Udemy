#include <stdio.h>
#include <stdlib.h>
void main()
{
  int num1, num2;
  char operator;
  printf("please enter first number:  ");
  scanf("%d", num1);

  printf("please enter second number: ");
  scanf("%d", num2);
  printf("Please enter operator (+,-,/,%%,):  ");
  scanf("%c", &operator);
  switch (operator)
  {
  case '%':
    if (num2 == 0)
    {
      printf("Invalid selection, please reenter number 2");
    }
    else
    {
      printf("The result of %d %c %d is %d", num1, operator, num2, num1 % num2);
    }

    break;
  default:
    printf("Error 404");
    break;
  }
}
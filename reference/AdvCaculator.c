#include <stdio.h>
#include <stdlib.h>
void main()
{
  float num1, num2;
  char mathOperation;
  printf("please enter the mathOperation (+ - / * %%): ");
  scanf("%c", &mathOperation);
  printf("please enter first number:  ");
  scanf("%f", &num1);
  printf("please enter second number: ");
  scanf("%f", &num2);
  switch (mathOperation)
  {

  case '+':
    printf("The addition of %.2f + %.2f is %.2f", num1, num2, num1 + num2);
    break;
  case '-':
    printf("%.2f-%.2f = %.2f", num1, num2, num1 - num2);
    break;
  case '/':
    if (num2 == 0)
    {
      printf("Unable to divide by 0, please reenter number 2");
    }
    else
    {
      printf("%.2f / %.2f is %.2f", num1, num2, num1 / num2);
    }
    break;
  case '*':
    printf("%.2f*%.2f = %.2f", num1, num2, num1 * num2);
    break;
  case '%':
    if (num2 == 0)
    {
      printf("Unable to divide by 0, please reenter number 2");
    }
    else
    {
      printf("The remainder of %d %% %d is %d", (int)num1, (int)num2, (int)num1 % (int)num2);
    }
    break;
  default:
    printf("Error 404");
    break;
  }
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number, currentDigit = 0, oddAdt = 0, evenAdt = 0;

  printf("please enter number:  ");
  scanf("%d", &number);

  while (number > 0)
  {
    currentDigit = number % 10;
    if (currentDigit % 2 == 0)
      evenAdt += currentDigit;
    else
      oddAdt += currentDigit;
    number = number / 10;
  }
  printf("Odd - %d\nEven - %d", oddAdt, evenAdt);
}
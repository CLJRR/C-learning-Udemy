#include <stdio.h>
#include <stdlib.h>

int maxDigit(int input)
{
  int digit, tens;
  digit = input % 10;
  tens = input / 10;
  if (digit > tens)
    return digit;
  else
    return tens;
}
int main()
{
  int input, max;
  printf("please enter a 2 digit number:  ");
  scanf("%d", &input);
  while (input < 10 || input >= 100)
  {
    printf("You have entered an invalid input\nplease enter a 2 digit number:  ");
    scanf("%d", &input);
  }
  max = maxDigit(input);
  printf("%d", max);
}
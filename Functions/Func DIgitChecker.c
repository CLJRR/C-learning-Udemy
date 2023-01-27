#include <stdio.h>
#include <stdlib.h>
int DigitChecker(char firstChar, char secondChar, char thirdChar)
{
  int digit = 0, ten = 0, hundred = 0, finalResult;
  if ('0' <= firstChar && firstChar <= '9')
    hundred = (firstChar - '0') * 100;
  else
    return 0;
  if ('0' <= secondChar && secondChar <= '9')
    ten = (secondChar - '0') * 10;
  else
    return 0;
  if ('0' <= thirdChar && thirdChar <= '9')
    digit = thirdChar - '0';
  else
    return 0;
  finalResult = hundred + ten + digit;
  return finalResult;
}
int main()
{
  char firstChar, secondChar, thirdChar;
  printf("please enter 3 numbers:");
  scanf("%c %c %c", &firstChar, &secondChar, &thirdChar);
  printf("Inputs: %d %c %c\n", firstChar, secondChar, thirdChar); // checks
  printf("%d", DigitChecker(firstChar, secondChar, thirdChar));
}
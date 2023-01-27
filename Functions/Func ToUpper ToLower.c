#include <stdio.h>
#include <stdlib.h>

char toLower(char character)
{
  if (65 <= character && character <= 90)
    return character + 32;
  else
    return -1;
}
char toUpper(char character)
{
  if ('a' <= character && character <= 'z')
    return character - 32;
  else
    return -1;
}
int main()
{
  char input, result;
  printf("please enter a character: ");
  scanf("%c", &input);
  printf("%c", toUpper(input));
}
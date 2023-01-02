#include <stdio.h>
#include <stdlib.h>
void main()
{
  char input;
  printf("please enter a char:  ");
  scanf("%c", &input);
  if (input >= 48 && input <= 57)
  {
    printf("char is a number");
  }
  else if (input >= 65 && input <= 90)
  {
    printf("char is a uppercase letter");
  }
  else if (input >= 97 && input <= 122)
  {
    printf("char is a lowercase letter");
  }
  else
  {
    printf("char is others");
  }
}
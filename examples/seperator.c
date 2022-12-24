#include <stdio.h>
#include <stdlib.h>
int main()
{
  float input, remainder;
  printf("please enter a floating number: ");
  scanf("%f", &input);
  remainder = input - (int)input;

  printf("The integer number is %d\nThe 2 decimal floating point number is %.2f", (int)input, remainder);
}
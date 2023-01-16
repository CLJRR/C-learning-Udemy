#include <stdio.h>
#include <stdlib.h>

void casting(void)
{
  int x, y;
  x = 4;
  y = 3;
  double result, castedResult;
  result = x / y;
  castedResult = x / (double)y;
  printf("The uncasted result is %.2lf\nThe casted result is %.2lf\n\n", result, castedResult);
  result = x / 3;
  castedResult = x / (double)(1 + 2);
  printf("The uncasted result is %.2lf\nThe casted result is %.2lf\n", result, castedResult);
}
void ifelse()
{
  int x, y;
  printf("please enter value of x:  ");
  scanf("%d", &x);
  printf("please enter value of y:  ");
  scanf("%d", &y);
  if (x > y)
  {
    printf("x is bigger than y\n");
  }
  else if (x < y)
  {
    printf("y is bigger than x\n");
  }
  else if (x == y)
  {
    printf("x is equal to y\n");
  }
  else
  {
    printf("you have entered an invalid selection, please re-enter x and y");
  }
}
int main()
{
  char selection; // integer %d is integers

  // float;         // floating numbers  %f is for floating numbers
  // double;        // large floatring numbers
  printf("a - casting example\n"
         "b - if else example\n"
         "c - While loop example\n"
         "please enter selection:\n");
  scanf("%c", &selection);
  // sleep(1); // wait 1 seconds
  switch (selection)
  {
  case 'a':
    casting();
    break;
  case 'b':
    ifelse();

  default:
    break;
  }
}
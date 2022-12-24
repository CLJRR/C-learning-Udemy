#include <stdio.h>
#include <stdlib.h>

int main()
{
  int selection, x, y; // integer %d is integers
  float b;             // floating numbers  %f is for floating numbers
  double c;            // large floatring numbers
  printf("1 - casting example\n"
         "2 - if else example\n"
         "3 - While loop example\n"
         "please enter selection:\n");

  scanf("%d", &selection);

  sleep(1); // wait 1 seconds

  if (selection == 1)
  {
    //---------------------------------------------------------------------------------------------------
    // casting
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
  else if (selection == 2)
  {
    //---------------------------------------------------------------------------------------------------
    // if else
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
  else if (selection == 3)
  {
    //---------------------------------------------------------------------------------------------------
    // this program prints numbers 1-9
    for (x = 1; x < 10; x += 2) // for x is less than 10,loop. After each loop, add 2 to X
    {
      printf("\n%d", x);
    }
  }
  else
  {
    printf("Selection is invalid, please reneter selection");
  }
}
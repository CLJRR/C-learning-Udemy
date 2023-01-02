#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  double result = 0.01;
  for (i = 1; i <= 30; i++)
  {
    printf("day: %d Amt: %f\n", i, result);
    result = result * 2;
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  double x1, x2, y1, y2, result;
  printf("please enter x1 coordinates:  ");
  scanf("%lf", &x1);
  printf("please enter y1 coordinates:  ");
  scanf("%lf", &y1);
  printf("please enter x2 coordinates:  ");
  scanf("%lf", &x2);
  printf("please enter y2 coordinates:  ");
  scanf("%lf", &y2);
  result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  printf("%lf", result);
}
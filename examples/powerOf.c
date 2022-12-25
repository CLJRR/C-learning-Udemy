#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double x, x2, x4, x6, x8;
  printf("please enter x value: ");
  scanf("%lf", &x);
  printf("%lf\n", x);
  x2 = pow(x, 2.0);
  x4 = pow(x, 4.0);
  x6 = pow(x, 6.0);
  x8 = pow(x, 8.0);
  printf("x^2 = %.2lf\nx^4 = %.2lf\nx^6 = %.2lf\nx^8 = %.2lf\n", x2, x4, x6, x8);
}
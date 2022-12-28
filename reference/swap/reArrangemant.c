#include <stdio.h>
#include <stdlib.h>
void main()
{
  int a, b, c;
  printf("please enter 3 numbers:\n");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b) // a(smallest) - b - c(biggest)
  {
    a = a * b;
    b = a / b;
    a = a / b;
  }

  if (c < a)
  {
    a = a * c;
    c = a / c;
    a = a / c;

    b = b * c;
    c = b / c;
    b = b / c;
  }
  if (b > c)
  {
    b = b * c;
    c = b / c;
    b = b / c;
  }

  printf("%d %d %d", a, b, c);
}
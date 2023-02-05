#include <stdio.h>
#include <stdlib.h>
int swap()
{
  int a = 243232, b = 45678;
  a -= b;
  b += a;
  a = b - a;
  printf("a:  %d\nb:  %d", a, b);
}
int input(int a, int b)
{
  printf("please enter value one: ");
  scanf("%d", &a);
  printf("please enter value two: ");
  scanf("%d", &b);
  return a, b;
}
int main()
{
  int a, b;
  input(a, b);
  printf("%d, %d", a, b);
}
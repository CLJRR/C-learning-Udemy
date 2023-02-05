#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a = 5, *p;
  printf("%d\n", a);
  printf("%p\n", &a);

  p = &a; // p to point to a
  printf("%p\n", p);
  printf("%d\n", *p); //* de-reference (go to address of p and get the value that is stored there)
}
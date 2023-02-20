#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a = 5, *p; // to declare pointer, use *
  printf("Using A:\n");
  printf("%d\n", a);
  printf("%p\n", &a); // address of int a

  p = &a; // p to point to a
  printf("Using Pointer:\n");
  printf("%d\n", *p); //* de-reference (go to address of p and get the value that is stored there)
                      // to print (*P) as %d, need to de-reference.
  printf("%p\n", p);  // to prove that *p is pointing to int a address
}
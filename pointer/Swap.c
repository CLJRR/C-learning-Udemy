#include <stdio.h>
#include <stdlib.h>
void swap(int num1, int num2, int *Pnum1, int *Pnum2)
{
  *Pnum2 = num1;
  *Pnum1 = num2;
}
int main()
{
  int input1 = 10, input2 = 30;
  printf("Before\nnum 1: %d\nnum 2: %d\n", input1, input2);
  swap(input1, input2, &input1, &input2);
  printf("After\nnum 1: %d\nnum 2: %d\n", input1, input2);
}
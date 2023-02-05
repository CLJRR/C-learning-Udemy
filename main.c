#include <stdlib.h>
#include <stdio.h>
void swap(int grade1, int grade2, int *Pgrade1, int *Pgrade2)
{
  *Pgrade1 = grade2; // in the address in main func of (grade1), change to 145(grade2)
  *Pgrade2 = grade1; // in the address in main func of (grade2), change to 122(grade1)
}
int main()
{
  int grade1 = 122, grade2 = 145;
  swap(grade1, grade2, &grade1, &grade2); // send over the value and address of grade 1 and 2
  printf("grade 1:  %d\ngrade 2:  %d\n", grade1, grade2);
}

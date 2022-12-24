#include <stdio.h>
#include <stdlib.h>

int main ()
{
  float grade1,grade2,grade3,average;
  printf("please enter your first grade:");
  scanf("%f",&grade1);
  printf("please enter your second grade:");
  scanf("%f",&grade2);
  printf("please enter your third grade:");
  scanf("%f",&grade3);
  average=(grade1+grade2+grade3)/3;
  printf("your average grade is %.2f\n",average);
  return 0;

}
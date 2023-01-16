#include <stdio.h>
#include <stdlib.h>

float averageFinder()
{
  int num1, num2, num3;
  float average;
  printf("please enter grade 1: ");
  scanf("%d", &num1);
  printf("please enter grade 2: ");
  scanf("%d", &num2);
  printf("please enter grade 3: ");
  scanf("%d", &num3);
  average = (num1 + num2 + (float)num3) / 3;
  printf("%.2f\n", average);
  return average;
}
int main()
{
  float average;
  average = averageFinder();
  printf("average =  %.2f", average);
}
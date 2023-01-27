#include <stdio.h>
#include <stdlib.h>
void main()
{
  // int marks;
  // printf("please enter your marks", &marks);
  // scanf("%d", &marks);
  // if (marks >= 80)
  // {
  //   printf("gd job");
  // }
  // else if (marks >= 60)
  // {
  //   printf("not bad");
  // }
  // else
  // {
  //   printf("you suk ass");
  // }

  char grade;
  printf("enter grade (A-F):  ");
  scanf("%c", &grade);
  switch (grade)
  {
  case 'A' && 'a':
    printf("grade between 90-100\n");
    break;
  case 'B':
    printf("grade between 80-89\n");
    break;
  case 'C':
    printf("grade between 70-79");
    break;
  case 'D':
    printf("grade betweem 60-69");
    break;
  case 'F':
    printf("grade between 0-59");
    break;
  default:
    printf("invalid selection");
    break;
  }
}
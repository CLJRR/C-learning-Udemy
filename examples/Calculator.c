#include<stdio.h>
#include<stdlib.h>

int main()
{

  int hoursWorked;
  double salary;
  printf("please enter salary in XX.XX format\n");
  scanf("%lf",&salary);
  printf("please enter no of hours worked\n");
  scanf("%d",&hoursWorked);
  printf("The addition of these 2 numbers are %.2lf",salary*hoursWorked);



}

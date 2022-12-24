#include<stdio.h>
#include<stdlib.h>

int main()
{
  int d,initial,n,result;
  printf("please enter initial number:  ");
  scanf("%d",&initial);
  printf("please enter the difference in the artihmetic sequence: ");
  scanf("%d",&d);
  printf("please enter the number of elements in the artithemtic sequence:  ");
  scanf("%d",&n);
  result= initial+(n-1)*d;
  printf("result=%d",result);
}
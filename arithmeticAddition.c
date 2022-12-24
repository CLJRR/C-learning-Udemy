#include<stdio.h>
#include<stdlib.h>

int main()
{
  int d,initial,n,result,loop,x=10,additionResult;
  printf("please enter initial number:  ");
  scanf("%d",&initial);
  printf("please enter the difference in the artihmetic sequence: ");
  scanf("%d",&d);
  printf("please enter the number of elements in the artithemtic sequence:  ");
  scanf("%d",&n);

  for(x=1; x<(n+1);x++)
  {
    result= initial+(x-1)*d;
    additionResult = additionResult+result;
    printf("result = %d \naddition result= %d\n\n",result,additionResult);
  }
  // printf("result=%d",result);
}
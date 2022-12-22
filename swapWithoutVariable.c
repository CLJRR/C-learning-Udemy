#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a=232,b=13454;
  a=a*b;
  b=a/b;
  a=a/b;
  printf("a=%d,b=%d",a,b);
}
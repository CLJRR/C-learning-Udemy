#include <stdio.h>
#include <stdlib.h>
int main()
{
  double a=10.12,b=30.23,c;
  printf("before:\na=%.2lf\nb=%.2lf\nc=%.2lf\n\n",a,b,c);
  c=a;
  a=b;
  b=c;
  printf("after:\na=%.2lf\nb=%.2lf\nc=%.2lf\n",a,b,c);

}
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int n, i, ii;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (ii = 1; ii <= i; ii++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
}
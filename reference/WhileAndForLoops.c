#include <stdio.h>
#include <stdlib.h>

int main()

{

  int num = 2;
  int pow = 2;
  int x;
  int result = 1;

  while (x < pow)
  {
    result = result * num;
    x++;
  }
  printf("%d", result);

  // for (x=0; x < pow; x++)
  // {
  //   result = result * num;
  // }
  // printf("%d", result);
}
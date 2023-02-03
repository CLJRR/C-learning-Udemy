#include <stdio.h>
#include <stdlib.h>
int test()
{
  int test[5] = {5, 4, 3, 2, 1};
  printf("%d", test[0]);
}
int main()
{
  int grades[5], i;
  for (i = 0; i < 5; i++)
  {
    printf("please enter grade %d:  ", i + 1);
    scanf("%d", &grades[i]);
  }
  for (i = 0; i < 5; i++)
  {
    printf("grade %d: %d\n", i + 1, grades[i]);
  }
}

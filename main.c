#include <stdio.h>
#include <stdlib.h>
#define n 2
int main(void)
{
  char names[n][12];
  for (int i = 0; i < n; i++)
  {
    printf("please enter name %d: ", i + 1);
    scanf("%s", names[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("%s\n", names[i]);
    //test
  }
}
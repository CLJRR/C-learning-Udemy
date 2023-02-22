#include <stdio.h>
#include <stdlib.h>

int test()
{
  int i = 0;
  char name[] = "Lee Jia Rong";
  while (name[i] != '\0')
  {
    printf("%c", name[i]);
    i++;
  }
}
int main()
{
  int i = 0;
  char name[12];
  printf("please enter name");
  scanf("%s", &name);
  while (name[i] != '\0')
  {
    printf("%c", name[i]);
    i++;
  }
}
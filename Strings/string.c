#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char name[20], names[20], test[20];
  printf("please enter String(one word): ");
  scanf("%s", &name); // one word
  printf("%d, %s\n", strlen(name), name);
  printf("please enter String(two words n more): ");
  gets(names); // more then one word (stores spaces)
  fgets(test, 20, stdin);
  printf("%d, %s\n", strlen(test), test);
}
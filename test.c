#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
  char arr[10];
  int i = 0;
  printf("please enter your name:");
  scanf("%s", &arr);
  while (arr[i] != '\0')
  {
    printf("%c", arr[i]);
    i++;
  }
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int size = 0, count = 1, NotAscending = 0, num1 = 0, num2 = 0;
  while (size <= 0)
  {
    printf("please enter size:  ");
    scanf("%d", &size);
  }

  while (size != 0)
  {
    printf("please enter number %d: ", size);
    scanf("%d", &num1);
    if (num1 < num2)
    {
      NotAscending = 1;
      break;
    }
    num2 = num1;
    size--;
  }
  if (NotAscending == 1)
    printf("Not ascending");
  else
    printf("Ascending");
}
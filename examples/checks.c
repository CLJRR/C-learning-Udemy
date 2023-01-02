#include <stdio.h>
int main()
{
  int input;
  do
  {
    printf("Enter grade:  ");
    scanf("%d", &input);
    if (input < 0 || input > 100)
    {
      printf("Invalid grade, please re-enter grade\n");
    }

  } while (input < 0 || input > 100);
  printf("ans: %d\n", input);
}
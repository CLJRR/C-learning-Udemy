#include <stdio.h>
#include <stdlib.h>
void main()
// {
//   int num1, num2;
//   printf("please enter number 1:  ");
//   scanf("%d", &num1);
//   printf("please enter number 2:  ");
//   scanf("%d", &num2);
//   if (num1 == num2)
//   {
//     printf("The numbers are equal");
//   }
//   else
//   {
//     printf("The numbers are not equal");
//   }
// }

// {
//   int num1, num2, num3;
//   printf("please enter number 1:  ");
//   scanf("%d", &num1);
//   printf("please enter number 2:  ");
//   scanf("%d", &num2);
//   printf("please enter number 3:  ");
//   scanf("%d", &num3);
//   if (num1 != num2 || num1 != num3)
//   {
//     printf("The numbers are not equal");
//   }
//   else
//   {
//     printf("The numbers are equal");
//   }
// }

// {
//   int input, hundreds, tens, ones;
//   printf("please enter a 3 digit number:  ");
//   scanf("%d", &input);
//   hundreds = input / 100;
//   ones = input % 10;
//   tens = (input / 10) % 10;
//   if (input > 999)
//   {
//     printf("invalid number");
//   }
//   else if (hundreds < tens && tens < ones)
//   {
//     printf("Acending");
//   }
//   else
//   {
//     printf("Not Acending");
//   }
// }

{
  int input;
  printf("please enter a number:  ");
  scanf("%d", &input);
  if (input > 0)
  {
    printf("positive\n");
  }
  else if (input < 0)
  {
    printf("negative\n");
  }
  else
  {
    printf("equals 0\n");
  }
}

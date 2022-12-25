#include <stdio.h>
#include <stdlib.h>
// void main()
// {
//   float num1, num2;
//   printf("please enter two floating pts numbers: ");
//   scanf("%f%f", &num1, &num2);
//   if (num1 > num2)
//   {
//     printf("Max: %.2f\nMin: %.2f\n", num1, num2);
//   }
//   else
//   {
//     printf("Max: %.2f\nMin: %.2f\n", num2, num1);
//   }
// }
// int main()
// {
//   int input, remainder;
//   printf("please enter the number:  ");
//   scanf("%d", &input);
//   remainder = input % 2;
//   if (remainder == 0)
//   {
//     printf("%d is a even number", input);
//   }
//   else
//   {
//     printf("%d is a odd number", input);
//   }
// }
int main()
{
  int num1, num2, num3, min, max;
  printf("please enter three numbers: ");
  scanf("%d%d%d", &num1, &num2, &num3);
  max = num1;
  min = num2;
  if (min > max)
  {
    max = num2;
    min = num1;
  }
  if (num3 > max)
  {
    max = num3;
  }
  if (num3 < min)
  {
    min = num3;
  }
  printf("Max:  %d\nMin:  %d\n", max, min);
  //-------------------------------------------------------------------
  // if (num1 > num2 && num1 > num3)
  // {
  //   printf("Max: %d\n", num1);
  //   if (num2 > num3)
  //   {
  //     printf("Min: %d\n", num3);
  //   }
  //   else
  //   {
  //     printf("Min: %d\n", num2);
  //   }
  // }
  // else if (num2 > num3 && num2 > num1)
  // {
  //   printf("Max: %d\n", num2);
  //   if (num1 > num3)
  //   {
  //     printf("Min: %d\n", num3);
  //   }
  //   else
  //   {
  //     printf("Min: %d\n", num1);
  //   }
  // }
  // else
  // {
  //   printf("Max: %d\n", num3);
  //   if (num1 > num2)
  //   {
  //     printf("Min: %d\n", num2);
  //   }
  //   else
  //   {
  //     printf("Min: %d\n", num1);
  //   }
  // }
}

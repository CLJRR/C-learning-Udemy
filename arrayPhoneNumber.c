#include <stdio.h>
#include <stdlib.h>
#define size 8
int main()
{
  int i, phoneNumber[size], largestDigit;
  for (i = 0; i < size; i++)
  {
    printf("please enter phone number %d:  ", i + 1);
    scanf("%d", &phoneNumber[i]);
  }
  largestDigit = phoneNumber[0];
  for (i = 0; i < size; i++)
  {
    if (largestDigit < phoneNumber[i])
      largestDigit = phoneNumber[i];
  }
  printf("The max value is %d\n", largestDigit);

  for (i = 0; i < size; i++)
  {
    if (largestDigit == phoneNumber[i])
      printf("the Index is %d\n", i);
  }
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int input, firstNum, secondNum, thirdNum, result, reversedNumber;

  printf("please enter a 3 digit number:  ");
  scanf("%d", &input);
  firstNum = input / 100;
  secondNum = input / 10 - firstNum * 10;
  thirdNum = input - firstNum * 100 - secondNum * 10;
  result = firstNum + secondNum + thirdNum;
  reversedNumber = thirdNum * 100 + secondNum * 10 + firstNum;
  printf("the result is %d\n", result);
  printf("the reversed number is %d\n", reversedNumber);
  // OR------------------------------------------------------
  thirdNum = input % 10;
  secondNum = (input / 10) % 10;
  firstNum = input / 100;
  result = firstNum + secondNum + thirdNum;
  reversedNumber = thirdNum * 100 + secondNum * 10 + firstNum;
  printf("the result is %d\n", result);
  printf("the reversed number is %d\n", reversedNumber);
}
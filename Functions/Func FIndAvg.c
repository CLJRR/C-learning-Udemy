#include <stdio.h>
#include <stdlib.h>
float findAverage(int value, int maxdigit)
{
  int count = 0, currentDigit;
  float result = 0;
  while (value > 0)
  {
    currentDigit = value % 10;
    value = value / 10;
    if (currentDigit < maxdigit)
    {
      count++;
      result = result + currentDigit;
    }
  }
  result = result / count;
  printf(
      "number of digit: %d\n", count);
  return result;
}
int main()
{
  int num, digit;
  printf("Please enter a value: ");
  scanf("%d", &num);
  printf("Please enter a digit value");
  scanf("%d", &digit);
  printf("Result: %.2f", findAverage(num, digit));
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
int main()
{
  int dateArrayDay[SIZE];
  int dateArrayMonth[SIZE];
  int dateArrayYear[SIZE];
  int inputArray[3];
  int i, j;
  for (i = 0; i < SIZE; i++)
  {
    printf("Please enter date %d in [DD MM YYYY] format: ", i + 1);
    scanf("%d %d %d", &inputArray[0], &inputArray[1], &inputArray[2]);

    dateArrayDay[i] = inputArray[0];
    dateArrayMonth[i] = inputArray[1];
    dateArrayYear[i] = inputArray[2];
  }
}
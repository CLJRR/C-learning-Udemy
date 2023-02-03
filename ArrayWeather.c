#include <stdlib.h>
#include <stdio.h>
#define size 7

int main()
{
  int i;
  double temperature[size], averageTemp = 0, hottest = 0, coldest = 0;
  for (i = 0; i < size; i++)
  {
    printf("please enter temp %d: ", i + 1);
    scanf("%lf", &temperature[i]);
  }
  printf("cold: %lf\nhot: %lf\n", coldest, hottest);
  for (i = 0; i < size; i++)
  {
    averageTemp += temperature[i];
    if (hottest < temperature[i])
      hottest = temperature[i];
    if (coldest > temperature[i])
      coldest = temperature[i];
  }

  printf("Average:  %lf\nHottest:  %lf\nColdest: %lf\n", averageTemp / size, hottest, coldest);
}
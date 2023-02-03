#include <stdlib.h>
#include <stdio.h>
#define size 7

int main()
{
  int i;
  double temperature[size], averageTemp, hottest, coldest;
  for (i = 0; i < size; i++)
  {
    printf("please enter temp %d: ", i + 1);
    scanf("%lf", &temperature[i]);
  }
  hottest = temperature[0];
  coldest = temperature[0];
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
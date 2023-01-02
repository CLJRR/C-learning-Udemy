#include <stdio.h>
#include <stdlib.h>
void main()
{
  int year, month, day;
  printf("please enter year:  ");
  scanf("%d", &year);
  printf("please enter month: ");
  scanf("%d", &month);
  printf("please enter day: ");
  scanf("%d", &day);
  printf("day:  0x%x\nmonth:  0x%x\nyear: 0x%x\n", day, month, year);
}
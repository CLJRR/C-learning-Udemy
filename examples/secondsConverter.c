#include <stdio.h>
#include <stdlib.h>

int main()
{
  int seconds, secondsRemaining, minutes, hours;
  printf("please enter time in seconds: ");
  scanf("%d", &seconds);
  secondsRemaining = seconds % 60;
  hours = seconds / 3600;
  minutes = (seconds / 60) % 60;
  if (hours < 10)
    printf("0");
  printf("%d : ", hours);
  if (minutes < 10)
    printf("0");
  printf("%d : ", minutes);
  if (secondsRemaining < 10)
    printf("0");
  printf("%d", secondsRemaining);
}
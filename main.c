#include <stdio.h>
#include <stdlib.h>

int main()
{
  int seconds, secondsRemaining, minutes, hours;
  printf("please enter time in seconds: ");
  scanf("%d", &seconds);
  minutes = seconds / 60;
  hours = minutes / 60;
  secondsRemaining = seconds % 60;
  minutes = minutes % 60;
  printf("Hours:    %d\nMinutes:  %d\nSeconds:  %d\n", hours, minutes, secondsRemaining);
}
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
  printf("Hours:    %d\nMinutes:  %d\nSeconds:  %d\n", hours, minutes, secondsRemaining);
}
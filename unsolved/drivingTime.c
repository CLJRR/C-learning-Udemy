#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int timeHours, distance = 300, speed = 80;
  float timeMinutes;
  timeHours = distance / speed; // 300/80, remainder 60km
  timeMinutes = (distance % speed) / (speed / 60.0);
  printf("The time it will take will be %d hours and %.2f minutes\n", timeHours, timeMinutes);

  /*find way to print hours mins and seconds*/
}
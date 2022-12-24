#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int timeHours, distance = 302, speed = 80, timeMinutes, timeSeconds;
  timeHours = distance / speed; // 300/80, remainder 60km
  timeMinutes = (distance % speed) / (speed / 60.0);
  timeSeconds = (distance / (speed / 3600.0)) - timeHours * 3600 - timeMinutes * 60;
  printf("The time it will take will be %d hours, %d minutes and %d seconds\n", timeHours, timeMinutes, timeSeconds);

  /*find way to print hours mins and seconds*/
}

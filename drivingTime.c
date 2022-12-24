#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int timeHours,timeMinutes,timeSeconds,distance=300,speed=80;
  double remainingDistance,remainingDistance2;
  timeHours = distance/speed; // 300/80 ---> 3+h
  remainingDistance = distance % speed; // 60km(remainder)
  printf("remaining dist M %lf\n",remainingDistance); // remaining dist M 60

  timeMinutes = remainingDistance / (speed/60.0); // 30 / (80/60) -->

  remainingDistance2 = remainder(remainingDistance ,(double)(speed/60));
  printf("remaining dist S %lf\n",remainingDistance2);
  timeSeconds = remainingDistance/(speed/360.0);
  printf("The time it will take is %d hours,%d minutes,%d seconds\n",timeHours,timeMinutes,timeSeconds);

}
  timeMinutes = remainingDistance / (speed/60.0); // 60 / (80/60) -->
  remainingDistance = remainingDistance/(speed/60.0);
  printf("remaining dist S %d\n",remainingDistance);
  timeSeconds = remainingDistance/(speed/360.0);
  printf("The time it will take is %d hours,%f minutes,%2d seconds",timeHours,timeMinutes,timeSeconds);
  return 0;
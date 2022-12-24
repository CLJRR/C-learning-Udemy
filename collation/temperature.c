#include <stdio.h>
#include <stdlib.h>

int main(){
  double temperature,convertionMultiplier,convertionAddition,result;
  convertionMultiplier = 1.8; //formula is T(F) = T(C)*1.8 +32
  convertionAddition=32;
  printf("please enter temperature in celsius degree:");
  scanf("%lf",&temperature);
  result = (temperature*convertionMultiplier)+32;
  printf("the temperature in Fahrenheit Degrees is %lf",result);
  return 0;
}
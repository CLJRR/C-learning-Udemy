#include <stdio.h>
#include <stdlib.h>

int main()
{
  int selection;
  double celsius, fahrenheit;
  double muliplier=1.8, addition=32;
  printf("please enter\n1 for degrees to fahreheit\n2 for fahreheit to degrees\n9 to exit\n-------------------------\n");
  scanf("%d",&selection);
 
  while(selection!=9)
   {
  if(selection==1)
  {
  printf("Please enter temperature in Degree Celsius: ");
  scanf("%lf",&celsius);
  fahrenheit = (celsius*muliplier) + addition;
  printf("The temperature in Degrees Fahreheit is %.2lf\n\n",fahrenheit);
  }
  else if(selection==2)
  {
  printf("Please enter temperature in Degree Fahreheit: ");
  scanf("%lf",&fahrenheit);
  celsius = (fahrenheit-addition)/muliplier;
  printf("The temperature in Degrees Celsius is %.2lf\n\n",celsius);
  }
  else
  {
    printf("you have entered an invalid selection, please re-enter the selction\n");
  }
  printf("please enter\n1 for degrees to fahreheit\n2 for fahreheit to degrees\n9 to exit\n-------------------------\n");
  scanf("%d",&selection);
  }
}
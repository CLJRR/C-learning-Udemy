// #include <stdio.h>
// #include <stdlib.h>

// int main ()
// {
//   double length, width;
//   double area;
//   printf("Enter Length: ");
//   scanf("%lf",&length);
//   printf("Enter Width:  ");
//   scanf("%lf",&width);
//   area = length*width;
//   printf("Area of rectangle is %.2lf\n",area  );
// }
#include <stdio.h>
#include <stdlib.h>

int main ()
{
 double height, width;
 double perimeter;
 printf("Enter Height: ");
 scanf("%lf",&height);
 printf("Enter Width:");
 scanf("%lf",&width);
 perimeter = (height*2)+(width*2);
 printf("Area of rectangle is %.2lf\n",perimeter);
}
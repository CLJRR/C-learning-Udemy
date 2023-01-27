#include <stdio.h>
#include <stdlib.h>

int calcArea(int height, int width)
{
  int area;
  return area = height * width;
}
int main()
{
  int height, width, area;
  printf("please enter height:  ");
  scanf("%d", &height);
  printf("please enter width: ");
  scanf("%d", &width);
  area = calcArea(height, width);
  printf("%d", area);
}
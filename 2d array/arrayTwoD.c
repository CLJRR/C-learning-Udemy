#include <stdio.h>
#include <stdlib.h>
#define rowSize 3
#define columnSize 5
#define SIZE 5
int main()
{
  int arrayarray[SIZE][SIZE]; // type var [rows] [columms]
  // Initialization of 2d array
  // standard:
  int arrayarray2[rowSize][columnSize] = {{1, 2, 3, 4, 5},       // first row
                                          {6, 7, 8, 9, 10},      // second row
                                          {11, 12, 13, 14, 15}}; // third row
  // incomplete values:
  int arrayarray3[3][2] = {{},     // 0 0
                           {1, 2}, // 1 2
                           {3}};   // 3 0
  // Excessively values:
  int arrayarray4[2][3] = {1, 2, 3, 4, 5, 6}; // 1 2 3
                                              // 4 5 6
  int countRow, countColumn;
  // for (countRow = 0; countRow < rowSize; countRow++)
  // {
  //   for (countColumn = 0; countColumn < columnSize; countColumn++)
  //   {
  //     printf("%2d  ", arrayarray2[countRow][countColumn]);
  //   }
  //   printf("\n");
  // }
  for (countRow = 0; countRow < SIZE; countRow++)
  {
    for (countColumn = 0; countColumn < SIZE; countColumn++)
    {
      printf("Please enter value for row %d, column %d: ", countRow + 1, countColumn + 1);
      scanf("%d", &arrayarray[countRow][countColumn]);
    }
  }
  for (countRow = 0; countRow < SIZE; countRow++)
  {
    for (countColumn = 0; countColumn < SIZE; countColumn++)
      printf("%2d  ", arrayarray[countRow][countColumn]);
    printf("\n");
  }
}

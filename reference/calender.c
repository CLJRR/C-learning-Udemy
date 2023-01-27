#include <stdio.h>
#include <stdlib.h>

// void main()
// {
//   int day, month, year, leapYear;
//   printf("please enter Day: ");
//   scanf("%d", &day);
//   printf("please enter Month: ");
//   scanf("%d", &month);
//   printf("please enter Year:  ");
//   scanf("%d", &year);
//   // 31 days - Jan, March, May, Jul, Aug, Oct, Dec
//   // 30 days - Apr, Jun, Sep, Nov
//   // 28 days - Feb
//   day++;
//   if (month == 2)
//     if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
//     {
//       leapYear = 1;
//     }

//   if (month == 1, 3, 5, 7, 8, 10, 12 && day == 32)
//   {
//     month++;
//     day = 1;
//   }
//   else if (month == 4, 6, 9, 11 && day == 31)
//   {
//     month++;
//     day = 1;
//   }
//   else if ((month == 2 && leapYear == 0 && day == 29) || (leapYear == 1 && day == 30))
//   {
//     month++;
//     day = 1;
//   }
//   if (month == 13)
//   {
//     year++;
//     month = 1;
//   }
//   printf("%d %d %d", day, month, year);
// }

void main()
{
  int day, month, year, leapYear;
  printf("please enter Day: ");
  scanf("%d", &day);
  printf("please enter Month: ");
  scanf("%d", &month);
  printf("please enter Year:  ");
  scanf("%d", &year);
  // 31 days - Jan, March, May, Jul, Aug, Oct, Dec
  // 30 days - Apr, Jun, Sep, Nov
  // 28 days - Feb
  day++;
  if (month == 2)
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
      leapYear = 1;
    }
  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (day <= 31)
      break;
  case 4:
  case 6:
  case 9:
  case 11:
    if (day <= 30)
      break;
  case 2:
    if (day <= 28 || (day <= 29 && leapYear == 1))
      break;
  default:
    month++;
    day = 1;
    break;
  }
  if (month > 12)
  {
    month = 1;
    year++;
  }
  printf("the next day is %d %d %d", day, month, year);
}

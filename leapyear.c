//Check whether the year is leap year or not

#include <stdio.h>

int main()
{
   int year;
   year = 2016;

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);

   return 0;
}

//OUTPUT:
//2016 is a leap year

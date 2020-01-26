// Q,6. It is possible to calculate easily the day of the week on which a given date falls, it one knows the Julian day for that date.
//  For example, January 1 is always Julian day 1, since it is the first day of the year, whereas December 31 is day 365 in a
//  non-leap year or day 366 in a leap year. The day of the week is calculated as follows:
//  year = year in question (all four digits)
//  Julian_day = Julian day of date in question ( 1 to 366)
//  fours = integer portion of (year - 1) / 4
//  hundreds = integer portion of (year - 1) / 100
//  four_hundreds = integer protion of (year - 1) 400
//  day_of_the_week = (year + Julian_day + fours - hundreds + four_hundreds) % 7
//  where :0 Saturday 1 Sunday 2 Monday 3 Tuesday 4 Wednesday 5 Thursday 6 Friday
//  Write a program to calculate the day of the week as described above.
//  Verify its correctness by testing it on the current date.


#include<stdio.h>

 int main()

 {
     int year;
     printf("\n\n\t\t Enter the year\t");
     scanf("%d",&year);

     int julian_day;
     printf("\n\n\t\t Enter the equivalent julian day of the date of your choice\t");
     scanf("%d",&julian_day);

     int fours = (year-1)/4;

     int hundreds = (year-1)/100;

     int four_hundreds = (year-1)/400;

     int day_of_week = (year + julian_day + fours - hundreds + four_hundreds)%7;

     if (day_of_week == 0)

         printf("\n\t\t Its Saturday \n\n\n");

     if (day_of_week == 1)

         printf("\n\t\t Its Sunday \n\n\n");

     if (day_of_week == 2)

         printf("\n\t\t Its Monday \n\n\n");

     if (day_of_week == 3)

         printf("\n\t\t Its Tuesday \n\n\n");

     if (day_of_week == 4)

         printf("\n\t\t Its Wednesday \n\n\n");

      if (day_of_week == 5)

         printf("\n\t\t Its Thursday \n\n\n");

     if (day_of_week == 6)

         printf("\n\t\t Its Friday \n\n\n");




     return 0;

 }

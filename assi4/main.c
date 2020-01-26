/* Q,4. Write a program to convert a given number of days to a measure of time given in years,
   weeks, and days. For example, 375 days equals 1 year, 1 week and 3 days.
   (Ignore leap years in this program)*/

#include <stdio.h>
#include <math.h>

 int main()

 {
     int days,weeks,years,remdays;
     printf("\n\n\t\t Enter the number of days: \t");
     scanf("%d",&days);
     years = days/365;
     weeks = (days%365)/7;
     remdays = (days%365)%7;
     printf("\n\n\t\t %d number of days",days);
     printf("\n\t\tequals to %d years %d weeks and %d days",years,weeks,remdays);

     return 0;
 }

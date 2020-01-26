 // Q,5. Write a program to convert a number of inches into yards, feet and inches.
  //Example: 123 inches equals 3 yards, 1 foot,and 3 inches.

#include<stdio.h>

int main ()
{
    int yards,foot,inches,ninches;
    printf("\n\n\t\t Enter the number of inches \t");
    scanf("%d",&inches);
    yards = inches/36;
    foot = (inches%36)/12;
    ninches = (inches%36)%12;
    printf("\n\n\t\t%d inches equals %d yards %d foots and %d inches.\n\n\n",inches,yards,foot,ninches);


    return 0;
}

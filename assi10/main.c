// Q,10. Given that 39.37 inches are equivalent to 1 meter,
//  write a program that converts a given number of inches to the
//  equivalent length in centimeters.



#include <stdio.h>

int main()
{
    float inches,centimeter;
    printf("\n\n\t\t Enter the inches \t ");
    scanf("%f",&inches);
    centimeter = (100/39.37)*inches;
    printf("\n\n\t\t The equivalent of %f inches is %f .cm\n\n",inches,centimeter);


    return 0;
}

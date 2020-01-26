// Q,16. Write a program that inputs two numbers, a and b, and
//  then determines whether the product of the two numbers is greater than half of a


#include <stdio.h>

int main()

{
    float a,b;

    printf("\n\n\t\t Enter a numbet\t");
    scanf("%f",&a);

    printf("\n\n\t\t Enter a numbet\t");
    scanf("%f",&b);

    if ((a*b) > (a/2))
    {
        printf("\n\n\t\t Product of %f and %f is greater than half of %f\n\n\n\n",a,b,a);

    }

    else
    {
        printf("\n\n\t\t Product of %f and %f is not greater than half of %f\n\n\n\n",a,b,a);

    }

    return 0;

}


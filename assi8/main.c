//Q,8. Write a C Program that calculates the circumference and area of a circle from its radius.
// The value of pi may be assignedto a variable or used as a constant in the calculation.
// C has no built-in constants pi, so a floating point approximation such
// as 3.1416 should be used.



#include <stdio.h>

int main()
{
    float pi=3.142857143,radius,circumference,area;
    printf("\n\n\t\t Enter the radius of the circle\t");
    scanf("%f",&radius);
    circumference = 2*pi*radius;
    area = pi*radius*radius;
    printf("\n\n\t\t Circumference and Area of circle with radius %f is %f and %f\n\n\n",radius,circumference,area);


    return 0;
}

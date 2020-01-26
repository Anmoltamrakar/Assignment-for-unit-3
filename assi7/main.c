// Q,7. Write a C program that evaluates the following arithmetic expression
//  and prints out the result in scientific notation:


#include <stdio.h>

int main()

{
    float x;
    x = (1.34e+7 + 3.2e-3)/(9.8e+5 - 2.746e+7);
    printf("\n\n\t\t Answer = %e\n\n\n",x);

    return 0;
}

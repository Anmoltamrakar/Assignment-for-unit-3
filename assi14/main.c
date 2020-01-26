//Q,14. Write a program that asks the user to input two integers, a and b,
//  and then states whether or not a is evenly divisible by b.





#include <stdio.h>

int main()
{
    int a,b;
    printf("\n\n\t\t Enter a number\t");
    scanf("%d",&a);
    printf("\n\n\t\t Enter another a number\t");
    scanf("%d",&b);

    if (a%b == 0)
    {
        printf("\n\t\t%d is evenly divisible by %d\n\n\n",a,b);

    }

    else {
        printf("\n\t\t%d is not evenly divisible by %d\n\n\n",a,b);
    }

    return 0;
}

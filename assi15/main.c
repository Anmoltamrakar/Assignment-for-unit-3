// Q,15. Write a program that reads in two real numbers and
//  tells whether the product of the two numbers is equal to or greater than 100.




#include <stdio.h>

int main()
{
    int x,y;
    printf("\n\n\t\t Enter a number\t");
    scanf("%d",&x);
    printf("\n\n\t\t Enter a number\t");
    scanf("%d",&y);

    if (x*y == 100)
    {
        printf("Product of %d and %d is equal to 100",x,y);

    }

    else if (x*y > 100)

    {
        printf("\n\t\Product of %d and %d is %d which is greatr than 100 \t\n\n\n",x,y,(x*y));

    }

    else if (x*y < 100)
    {
        printf("\n\t\Product of %d and %d is %d which is less than 100 \t\n\n\n",x,y,(x*y));


    }

    return 0;
}

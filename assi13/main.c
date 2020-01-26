// Q,13. Write a program that enables a user to input an integer.
//  The program should then state whether the integer is evenly divisible by 5.


#include <stdio.h>

int main()
{
    int num;
    printf("\n\n\t\t Enter a number\t");
    scanf("%d",&num);

    if (num%5 == 0)
    {

    printf("\n\n\t\t%d is evanly divisible by 5",num);
   }

    else

    {
    printf("\n\n\t\t %d is not evenly divisible by 5",num);

    }

    return 0;
}

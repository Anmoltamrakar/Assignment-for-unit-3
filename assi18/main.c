// Q,18. Input a number and determine whether it is within a given range
//  (for example between 1 and 10). The low and high values
//  of the range may be input by the user rather than fixed by the program.



#include <stdio.h>

int main()
{
    int low,high,num;
    printf("\n\n\t\tEnter the lowest value ");
    scanf("%d",&low);
    printf("\n\n\t\tEnter the highest value ");
    scanf("%d",&high);
    printf("\n\n\t\tEnter the the number of your choice ");
    scanf("%d",&num);

    if (num > low && num < high)
    {
        printf("\n\t\t%d lies in the provided range\n\n\n ",num);

    }

    else
    {
        printf("\n\t\t%d doesnt lies in the provided range\n\n\n ",num);

    }


    return 0;
}

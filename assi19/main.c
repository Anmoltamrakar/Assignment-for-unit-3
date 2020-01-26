// Q,19. Input three positive integers representing the sides of a triangle, and
//  determine whether they form a valid triangle. Hint: In
//  a triangle, the sum of any two sides must always be greater than the third side.



#include <stdio.h>

int main()
{
    int sideA,sideB,sideC;
    printf("\n\n\t\t Enter the length of one side \t");
    scanf("%d",&sideA);
    printf("\n\n\t\t Enter the length of another side \t");
    scanf("%d",&sideB);
    printf("\n\n\t\t Enter the length of remaining side \t");
    scanf("%d",&sideC);

    if (sideA+sideB > sideC && sideA+sideC > sideB && sideB+sideC > sideA)
    {
        printf("\n\n\t\tThose side can from a valid triangle\n\n\n\n");
    }

    else
        printf("\n\n\t\tThose side can not from a valid triangle\n\n\n\n");


    return 0;
}

// Q,17. Write a program that inputs an integer and determines whether it is evenly divisible by both 6 and 7.


#include <stdio.h>

int main()
{
   int a;
   printf("\n\n\t\t Enter a number\t");
   scanf("%d",&a);

   if ((a%6 == 0) && (a%7 == 0))

     {

        printf("\n\n\t\t %d is evenly divisible by both 6 and 7\n\n\n\n",a);


       }

   else
   {

         printf("\n\n\t\t %d is not evenly divisible by both 6 and 7\n\n\n\n",a);
   }

    return 0;
}

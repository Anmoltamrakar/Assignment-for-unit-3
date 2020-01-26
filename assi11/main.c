//Q,11. To round off a floating point number to the nearest integer,
//  one adds 0.5 to the number and truncates it to an integer. Using
//  this knowledge, try to figure out how to round a floating point number to the nearest tenth,
//  hundredth etc.


#include <stdio.h>

int main()
{
   float x;
   int y;
   printf("\n\n\t\t Enter a floating point number\t");
   scanf("%f",&x);
   y = (int)(x+0.5);
   printf("\n\n\t\t %f is rounded off to %d\n\n\n",x,y);



    return 0;
}

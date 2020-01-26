/* Q,2.Write a program that computes the perimeter and the area of a rectangle.
       Define your own values for the length and width. */

#include<stdio.h>

  int main()
  {
      int length,breadth;
      length = 15;
      breadth = 30;
      printf("\n\n\t\t Area of rectangle of length and breadth %d and %d ",length,breadth);
      printf("\n\t\t is %d",length*breadth);
      printf("\n\n\t\tPerimeter of a rectangle of length and breadth %d and %d ",length,breadth);
      printf("\n\t\t is %d \n\n\n\n\n\n",2*(length+breadth));

      return 0;
  }

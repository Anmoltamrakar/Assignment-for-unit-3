// Q,9. Augment the above program so that it calculates the volume
//and surface area of a sphere, given the radius



#include <stdio.h>

 int main()
 {
     float pi=3.14285,radius,volume,surface_area;
     printf("\n\n\t\t Enter the radius of the circle \t");
     scanf("%f",&radius);
     volume = (4/3)*pi*radius*radius*radius;
     surface_area = 4*pi*radius*radius
     printf("\n\t\t Volume of sphare of radius %f is %f",radius,volume);
     printf("\n\t\t Surface area of sphare of radius %f is %f",radius,surface_area);


     return 0;

 }




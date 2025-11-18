#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius;
    float pi=3.1415; 

    printf("Please enter the radius of the sphere: ");
    scanf("%f", &radius);

     float surface_area=4*pi*radius*radius; //This is the formulae for a surface area of a sphere.
     printf("The surface area of the sphere is= %f", surface_area); //this gives the answer for the surface area
    return 0;
}



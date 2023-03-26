//to find the radius of a sphere
#include <stdio.h>
#include <math.h>

int main(){

const float PI=3.1416;
float area,r;

printf("Enter the area: ");
scanf("%f", &area);

r=sqrt(area/(4*PI));
printf("\nThe radius of the sphere is %f", r);


    return 0;
}
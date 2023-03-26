//to find the radius of a circle
#include <stdio.h>
int main(){
const float PI=3.1416;
float c,r;
printf("Enter the circumference of the circle:");
scanf("%f", &c);

r=c/(2*PI);
printf("\nThe radius of the circle is %lf", r);

    return 0;
}
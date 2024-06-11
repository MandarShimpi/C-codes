// this program  is used to calculate the volume of sphere from the  radius inputted by the user.

#include <stdio.h>
#define PI 3.14159
int main(void)
{
    double radius;

printf(" enter the raidus of the Sphere\n");

scanf("%lf", &radius);
//(4.00* PI*radius*radius * radius)/3.00;  this is the formula for calculating the radius

printf ("the volume of the Sphere is %lf", (4.00* PI*radius*radius * radius)/3.00);
 
    return 0;
}
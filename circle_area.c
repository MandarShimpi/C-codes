#include <stdio.h>
#define PI 3.14519

int main()
{
    double area = 0.0, radius = 0.0;
    printf(" enter radius :\n");
    scanf("%lf", &radius);
    area = PI * radius * radius; 
    printf("the area of the circle of radius %lf is\n" ,area) ;
    return 0;
}
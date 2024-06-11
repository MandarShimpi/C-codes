// this program is used to generate the sine value of the value user inputs


#include <stdio.h>
#include <math.h>
#define PI 3.141592653589

int main()
{
    float x;
    printf (" enter value between 0 and 1 \n");
    scanf("%f", &x);    
    if (x < 0 || x > 1)
    {
        printf (" given value exceeds the range please try again a value that is greater than 0 and less than 1 \n");


     return 1;
    }
    printf (" value of sine equal to %f  is %f\n", x, asin(x)*180/PI);





    return 0;
}

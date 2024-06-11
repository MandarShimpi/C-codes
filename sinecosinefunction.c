#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
int main(void)
{
    float x=0;
    printf("   value|\tsin|\t cos|\n");
    for (x = 0.0; x <=10.0; x=x+1.0)
    {    x=x/10.0;
         
         printf(" |%.2f |\t %.2f|\t %.2f|\n ", x, asin(x)*180.0/PI ,acos(x)*180.0/PI);
         
         x= x*10;
    }
    
   
    return 0;
}

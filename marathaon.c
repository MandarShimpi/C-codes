#include <stdio.h>

int main(void)
{
float miles , yard;
float kilometers ;
 printf("enter miles: \n");
    scanf("%f", &miles);
    printf("enter yards\n");
    scanf("%f", &yard);
    kilometers = 1.609 *( (miles + yard )/ 1760.0 );
    printf("dis in nmiles is %f the distance of marathon in kilometers is %f \n" ,miles , kilometers);
    return 0;
}

#include <stdio.h>

int main()
{
    int farenheit,celsius;
    printf("input temperature in farenheit");
    scanf("%d",&farenheit);
    celsius= (farenheit-32)/1.8 ;
    printf("for farenheit %d, the temperature in celsius will be %d",farenheit,celsius);
    return 0;
}

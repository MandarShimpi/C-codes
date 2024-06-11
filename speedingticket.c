#include <stdio.h>

int main()
{
    int speed;
    printf("enter speed in integer \n");
    scanf("%d", &speed);

   if (speed<=65)
   {
    printf("you are safe");
   }
   else
   {
    printf("you just got a speeding ticket\n");
   }
   
    return 0;
}

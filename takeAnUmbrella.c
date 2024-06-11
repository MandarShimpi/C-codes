// this progam will tell youu if you should take a Umbrella or not.

#include <stdio.h>

int main()
{
    int outside , weather, clear , rainy, cloudy;
 char res;
    clear = 0;
    rainy = 1;
    printf(" are you outside of the house? answer in yes or no \n");
    scanf("%c",&res);

if (res != "yes" || res != "no"){

    printf("Please enter correct response.\n");
}
if (res == "yes"){
outside=1;
}else
{
outside=0;
}

printf(" what is the weather outside the house? answer in clear or rainy\n");
scanf("%d",&weather);


    if (outside && weather)
    {
       printf(" take a umbrella\n");
    }

    else 
       printf(" dont take a umbrella") ;
    
    return 0;
}

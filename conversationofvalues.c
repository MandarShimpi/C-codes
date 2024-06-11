#include <stdio.h>

float km_miles(float number){

    return (number * 0.621371);

}
float inches_foot(float number){

    return (number * 0.083333);

}
float cm_inches(float number){

    return (number * 0.393701);

}
float pounds_kgs(float number){

    return (number * 0.453592);

}
float inches_meters(float number){

    return (number * 0.0254);

}



int main()
{
    float num;
   printf("what is the converstion you desire?\n 1.km into miles\n 2. inches to foot\n 3. cm to inches\n 4. pounds to kgs\n 5.inches to meters\n please choose the serial no. \n");
   scanf("%f",&num);

   if (num==1)
   {
    printf("please enter the value of km\n");
    scanf("%f",&num);
    printf(" %f km = %f miles\n", num , km_miles(num));
   }
   
      if (num==2)
   {
    printf("please enter the value in inches\n");
    scanf("%f",&num);
    printf(" %f inches = %f foot\n", num , inches_foot(num));
   }
    if (num==3)
   {
    printf("please enter the value in cm\n");
    scanf("%f",&num);
    printf(" %f cm = %f inches\n", num , cm_inches(num));
   }
        if (num==4)
   {
    printf("please enter the value in pounds\n");
    scanf("%f",&num);
    printf(" %f pounds = %f kg\n", num , pounds_kgs(num));
   }
    if (num==5)
   {
    printf("please enter the value in pounds\n");
    scanf("%f",&num);
    printf(" %f inches = %f meters\n", num ,inches_meters(num));
   }
    return 0;
}

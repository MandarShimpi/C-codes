#include <stdio.h>
float km_miles(float number)
{
    return (number * 0.621371);
}
float inches_foot(float number)
{
    return (number * 0.083333);
}
float cm_inches(float number)
{
    return (number * 0.393701);
}
float pounds_kgs(float number)
{
    return (number * 0.453592);
}
float inches_meters(float number)
{
    return (number * 0.0254);
}
int main()
{
    int choice;
    float num;
start:
    while (1)
    {
        printf("what is the converstion you desire?\n");
        printf("1.km into miles\n");
        printf("2. inches to foot\n");
        printf("3. cm to inches\n");
        printf("4. pounds to kgs\n");
        printf("5.inches to meters\n");
        printf("6. Quit the program\n");
        printf("please choose the serial no.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the value in km \n");
            scanf("%f", &num);
            printf("%f km is equal to %f miles\n", num, km_miles(num));
            break;

        case 2:
            printf("enter the value in inches \n");
            scanf("%f", &num);
            printf("%f inches is equal to %f foot\n", num, inches_foot(num));
            break;

        case 3:
            printf("enter the value in cm \n");
            scanf("%f", &num);
            printf("%f cm is equal to %f inches\n", num, cm_inches(num));
            break;

        case 4:
            printf("enter the value in pound \n");
            scanf("%f", &num);
            printf("%f pounds is equal to %f kilograms\n", num, pounds_kgs(num));
            break;

        case 5:
            printf("enter the value in inches \n");
            scanf("%f", &num);
            printf("%f inches is equal to %f meters\n", num, inches_meters(num));
            break;

        case 6:
            printf("Quitting THe Program...");
            return 0;

        default:
            printf("select the correct serial number\n");
            goto start;
        }
    }
    return 0;
}

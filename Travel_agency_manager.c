#include <string.h>
#include <stdio.h>
struct Drivers
{
    char name[256];
    char driving_license_no[256];
    char start_route[256];
    char end_route[256];
    int Kms;
} D1, D2, D3;

int main()
{
    int id;
    printf("Enter the information of Driver 1 \n");
    printf("enter you name here : ");
    scanf("%s", &D1.name);
    printf("\n Enter your Driving license no here (use _ for space) : ");
    scanf("%s", &D1.driving_license_no);
    printf("\n Enter your starting location here : ");
    scanf("%s", &D1.start_route);
    printf("\n Enter your ending location here : ");
    scanf("%s", &D1.end_route);
    printf("\n Enter total number of kms here : ");
    scanf("%d", &D1.Kms);

    printf("Enter the information of Driver 2 \n");
    printf("enter you name here : ");
    scanf("%s", &D2.name);
    printf("\n Enter your Driving license no here (use _ for space) : ");
    scanf("%s", &D2.driving_license_no);
    printf("\n Enter your starting location here : ");
    scanf("%s", &D2.start_route);
    printf("\n Enter your ending location here : ");
    scanf("%s", &D2.end_route);
    printf("\n Enter total number of kms here : ");
    scanf("%d", &D2.Kms);

    printf("Enter the information of Driver 3 \n");
    printf("enter you name here : ");
    scanf("%s", &D3.name);
    printf("\n Enter your Driving license no here (use _ for space) : ");
    scanf("%s", &D3.driving_license_no);
    printf("\n Enter your starting location here : ");
    scanf("%s", &D3.start_route);
    printf("\n Enter your ending location here : ");
    scanf("%s", &D3.end_route);
    printf("\n Enter total number of kms here : ");
    scanf("%d", &D3.Kms);

    printf("enter the id of the driver you want information of : ");
    scanf("%d", &id);

    switch (id)
    {
    case 1:
        printf("Name : %s", D1.name);
        printf("\n--------------------");
        printf("\nDriving license : %s", D1.driving_license_no);
        printf("\n--------------------");
        printf("\nstarting location : %s", D1.start_route);
        printf("\n--------------------");
        printf("\nend location : %s", D1.end_route);
        printf("\n--------------------");
        printf("\ntotal number of kms here : %d", D1.Kms);
        printf("\n--------------------");
        printf("\nThanks for your time\n");
        break;

    case 2:
        printf("Name : %s", D2.name);
        printf("\n--------------------");
        printf("\nDriving license  :%s", D2.driving_license_no);
        printf("\n--------------------");
        printf("\nstarting location : %s", D2.start_route);
        printf("\n--------------------");
        printf("\nend location : %s", D2.end_route);
        printf("\n--------------------");
        printf("\ntotal number of kms here : %d", D2.Kms);
        printf("\n--------------------");
        printf("\nThanks for your time\n");
        break;

    case 3:
        printf("Name : %s", D3.name);
        printf("\n--------------------");
        printf("\nDriving license : %s", D3.driving_license_no);
        printf("\n--------------------");
        printf("\nstarting location : %s", D3.start_route);
        printf("\n--------------------");
        printf("\nend location : %s", D3.end_route);
        printf("\n--------------------");
        printf("\ntotal number of kms here : %d", D3.Kms);
        printf("\n--------------------");
        printf("\nThanks for your time\n");
        break;
    default:
        printf("invalid user id\n");
        break;
    }

    return 0;
}

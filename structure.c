#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char name[100];
    char fav_food[100];
} mandar, manthan, piyusha;

int main()
{
    while (1)
    {
        int i;
        mandar.id = 1;
        manthan.id = 2;
        piyusha.id = 3;
        mandar.marks = 10;
        manthan.marks = 9;
        piyusha.marks = 8;
        strcpy(mandar.fav_food, "pav bhaji");
        strcpy(manthan.fav_food, "paneer tikka");
        strcpy(piyusha.fav_food, "biryani");

        printf("Please enter the ID of the student you want information on, or press 0 to quit the program\n");
        scanf("%d", &i);
        switch (i)
        {
        case 0:
            printf("Quitting the program...\n");
            return 0;
        case 1:
            printf("The information of Mandar is as follows:\n");
            printf("The ID of Mandar is %d\nThe marks of Mandar are %d\nThe favorite food of Mandar is %s\n", mandar.id, mandar.marks, mandar.fav_food);
            break;
        case 2:
            printf("The information of Manthan is as follows:\n");
            printf("The ID of Manthan is %d\nThe marks of Manthan are %d\nThe favorite food of Manthan is %s\n", manthan.id, manthan.marks, manthan.fav_food);
            break;
        case 3:
            printf("The information of Piyusha is as follows:\n");
            printf("The ID of Piyusha is %d\nThe marks of Piyusha are %d\nThe favorite food of Piyusha is %s\n", piyusha.id, piyusha.marks, piyusha.fav_food);
            break;

        default:
            printf("Please enter a correct ID\n");
            continue;
        }
    }
    return 0;
}

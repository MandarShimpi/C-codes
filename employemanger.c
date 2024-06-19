#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct user_Id
{
    int length_of_id;
    char *id;
} E1, E2, E3;

int main()
{
    int i;
    char *id;
    printf("Please enter the length of your ID: ");
    scanf("%d", &E1.length_of_id);
    id = (char *)malloc(E1.length_of_id * sizeof(char));
    for (int i = 0; i < E1.length_of_id; i++)
    {
        printf("enter your ID: ");
        scanf("%s", &E1.id[i]);
        printf("%s\n", E1.id[i]);
    }

    //     for (int i = 0; i < E1.length_of_id; i++)
    // {
    //     printf ("Your Id is %s", E1.id[i]);
    // }

    return 0;
}

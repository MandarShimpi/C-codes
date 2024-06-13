#include <stdio.h>
int main()
{
    int i, n, j;

start:
    printf("press 0 for triangular star pattern , press 1 for reverse triangular star pattern: ");
    scanf("%d", &i);
    switch (i)
    {
    case 0:
        printf("enter no. of line : ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
        break;
    case 1:
        printf("enter no. of line : ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        break;

    default:
        printf("please choose the correct option : \n ");
        goto start;
    }
    return 0;
}

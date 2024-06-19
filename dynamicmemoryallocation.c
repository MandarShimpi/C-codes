#include <stdio.h>
#include <stdlib.h> // ALways include stdlib library for functions like malloc , calloc , realloc , free.

int main()
{
    int d;
    printf("enter size of array\n");
    scanf("%d", &d);
    int *ptr;
    // use of malloc
    ptr = (int *)malloc(d * sizeof(int));
    for (int i = 1; i <= d; i++)
    {
        printf(" enter the value no. %d of the array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 1; i <= d; i++)
    {
        printf("the value no. %d of the array is %d \n", i, ptr[i]);
    }

    // use of calloc

    ptr = (int *)calloc(d, sizeof(int));
    for (int i = 1; i <= d; i++)
    {
        printf(" enter the value no. %d of the array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 1; i <= d; i++)
    {
        printf("the value no. %d of the array is %d \n", i, ptr[i]);
    }
    // use of realloc

    ptr = (int *)realloc(ptr, sizeof(int));
    for (int i = 1; i <= d; i++)
    {
        printf(" enter the value no. %d of the array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 1; i <= d; i++)
    {
        printf("the value no. %d of the array is %d \n", i, ptr[i]);
    }

    return 0;
}

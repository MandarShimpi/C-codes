#include <stdio.h>

void array_reversal(int arr[])
{
    for (int i=6; i >=0; i--)
    {
        printf("%d\n", arr[i]);
     
    }
    
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    printf("the normal arrary is \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("the reversed array is \n");
    array_reversal(array);

    return 0;
}

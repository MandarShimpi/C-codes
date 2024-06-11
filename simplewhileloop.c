#include <stdio.h>

int main()
{
    int rotation, i=0;

    printf("input the no. of rotation you want to make the circle \n");
    scanf("%d", &rotation);

    while (i < rotation){
        i++;
    printf("the wheel just rotated \a \a\a\a\a\a\a\a\n", i);
    }

    return 0;
}


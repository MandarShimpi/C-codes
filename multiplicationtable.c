#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=0 , j;
    printf("enter the no you want table of ");
    scanf("%d", &j);
    printf("the multiplication table of the number %d is as follows\n", j);
while (i<10)
{
    i++;
    printf(" %d X %d =%d\n" ,j, i ,i*j);
}

    return 0;
}

#include <stdio.h>

int main()
{
    int a=3, b=4 , c=-2;

    printf("%d" , ++a+b++);
    printf( "\n%d" , b/a );
    printf( "\n%d" , a/b );
    printf("\n%d" , ++a+c );
    printf ("\n%d" ,-a+b);
    printf( "\n%d" , a+b );
    return 0;
}

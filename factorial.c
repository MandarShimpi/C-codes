#include <stdio.h>
int factorial(int number)
{
    if (number==1 || number==0) 
    {
        return 1;
    }
    else
    {
       return( number * factorial(number-1));
    }
    
}
 
 int main()
 {
    int num;
  printf("enter the number you want to factorial\n");
    scanf("%d",&num);

    printf("factorial of number %d is %d\n",num,factorial(num));
    return 0;
 }
 

// This program helps you understand call by value and call by reference.
/*
Made by Mandar Shimpi
Date: 13 June 2024
*/

#include <stdio.h> // Includes stdio header file in the program

void CBV(int x)
{           
    // Creates a function named CBV that demonstrates call by value.
    x = 87; // Can be any random value.
}

void CBR(int *x)
{            
    // Creates a function named CBR that demonstrates call by reference.
    *x = 23; // Can be any random value.
}

int main()
{
    int a = 7; // Initial value of 'a'. You can also change the program so that the user inputs the value of 'a'.
    printf("First, let's see Call By Value\n");
    printf("The value of a is now %d\n", a);

    CBV(a);
    printf("The value of a is now %d\n", a); /* Here the value of 'a' remains the same as the change is made
                                               in a formal variable and not the actual variable 'a', so the value in 'a' does not change. */

    printf("Now let's see what happens when we use Call By Reference\n");

    printf("The value of a is now %d\n", a);

    CBR(&a); // Storing the desired value in the address of the actual variable 'a'.
    printf("The value of a is now %d\n", a);

    return 0;
}

/* Call by Value and Call by Reference is easy to understand when you understand the difference between an actual variable and a formal variable. 
   The actual variable, as its name suggests, is the actual variable. In this program, the actual variable is 'a'.
   A formal variable can be described as a copy of the variable. For example, when you run the function CBV, 
   instead of storing the given value in the actual variable, it stores the value in a copy of the actual variable. 
   That's the reason when we print 'a' for the second time, it gives the same value. */

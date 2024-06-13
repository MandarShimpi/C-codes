#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,j;
    printf ("press 10 for triangular star pattern , press 1 for reverse triangular satr pattern: ");
    scanf("%d", &i);
    switch (i)
    {
    case 0:
    printf("enter no. of line : ");
    scanf("%d", &n);
        for (int i = 1; i < n; i++)
        {
           for (int j = 1; j < n; j++){
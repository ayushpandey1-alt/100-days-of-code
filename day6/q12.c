// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0)                   // if its true 
    {
        if (n == 0)              // this is checked n>0 is pos , n==0 is zero
            printf("Zero");
        else
            printf("Positive");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}
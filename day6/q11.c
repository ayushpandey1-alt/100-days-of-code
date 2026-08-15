// Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    if (n % 2 == 0)              // this tell us even & odd
    
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}
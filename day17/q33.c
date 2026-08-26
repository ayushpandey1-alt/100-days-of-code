// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int n, temp, digit, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }
    if (n == sum)
    {
        printf("It is an Armstrong no ");
    }
    else
    {
        printf("it is not an Armstrong no ");
    }

    return 0;
}
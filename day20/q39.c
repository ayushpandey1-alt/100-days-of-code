//Write a program to find the product of odd digits of a number
#include <stdio.h>

int main()
{
    int num, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;   // Get the last digit

        if (digit % 2 != 0) // Check if the digit is odd
        {
            product = product * digit;
        }

        num = num / 10;     // Remove the last digit
    }

    printf("Product of odd digits = %d", product);

    return 0;
}
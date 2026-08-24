// Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{

    int product = 1;
    int n;
    printf("Enter the factorial : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is  %d", product);
    return 0;
}
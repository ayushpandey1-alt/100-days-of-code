// Write a program to input two numbers and display their sum.
#include <stdio.h>
int main()
{
    int num1, num2, sum = 0;
    printf("Enter two number :");
    scanf("%d %d", &num1, &num2); // input 2 numbers
    sum = num1 + num2;
    printf("Sum of %d and %d is : %d", num1, num2, sum);
    return 0;
}
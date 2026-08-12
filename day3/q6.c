// Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    c = a; 
    a = b;
    b = c;

    printf("New value of a : %d \n", a);    // printf("New value of a & b is : %d %d",a,b);

    printf("New value of b : %d \n", b);

    return 0;
}
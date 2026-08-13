// Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a : ");        
    scanf("%d", &a);                                  // a=10
    printf("Enter the value of b : ");
    scanf("%d", &b);                                  // b=20

    a = a + b;    // a=30
    b = a - b;    // b=10
    a = a - b;    // a=20

    printf("After swapping:\n");
    printf("New value of a : %d \n", a);
    printf("New value of b : %d \n", b);

    return 0;
}

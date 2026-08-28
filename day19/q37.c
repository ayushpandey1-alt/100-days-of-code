//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, x, y , lcm , rem;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find GCD using Euclidean algorithm
    while (y != 0) {
        rem = x % y;
        x = y;
        y = rem;
    }

    lcm = (a / x) * b;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
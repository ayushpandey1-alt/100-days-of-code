// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf("Enter the Roots : ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;                            // main formula 

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different: %.1f, %.1f", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / (2 * a);

        printf("Roots are real and same: %.1f", r1);
    }
    else {
        printf("Roots are complex");
    }

    return 0;
}
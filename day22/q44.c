//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, numerator, denominator, term;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        numerator = 2 * k - 1;

        if (k == 1)
            denominator = 1;   // special case: first term is 1/1
        else
            denominator = 2 * k;

        term = numerator / denominator;
        sum = sum + term;

        printf("Term %d = %.0f/%.0f = %.4f\n", k, numerator, denominator, term);
    }

    printf("\nSum of series up to %d terms = %.4f\n", n, sum);

    return 0;
}

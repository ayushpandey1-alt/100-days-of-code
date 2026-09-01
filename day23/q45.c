//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, k;
    float sum = 0.0, term, numerator, denominator;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        numerator = 2 * k;
        denominator = 4 * k - 1;
        term = numerator / denominator;
        sum = sum + term;
    }

    printf("\nSum of series up to %d terms = %.2f\n", n, sum);

    return 0;
}

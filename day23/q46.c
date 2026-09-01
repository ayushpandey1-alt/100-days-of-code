/*
Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main() {
    int rows = 5, cols = 5, i, j;

    // Outer loop: controls the number of rows
    for (i = 1; i <= rows; i++) {

        // Inner loop: prints stars in each row
        for (j = 1; j <= cols; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
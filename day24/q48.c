/*
Write a program to print the following pattern:
1
12
123
1234
12345
*/
#include <stdio.h>

int main() {
    int rows = 5;

    // This loop for traverse
    // pyramid from top to bottom
    for (int i = 0; i < rows; i++) {

        // Inner loop for printing 
        // character in each rows
        for (int j = 0; j <= i; j++) {
            printf("%d", j + 1);
        }
        printf("\n");
    }
    return 0;
}
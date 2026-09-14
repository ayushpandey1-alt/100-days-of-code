//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read matrix and find sum
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}

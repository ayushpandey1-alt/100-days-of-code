//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];
    int sum[10];
    printf("Enter the matrix : ");
    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of each row
    for (int i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for (int j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    // Print sums
    for (int i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}

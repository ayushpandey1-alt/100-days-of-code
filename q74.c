//Q74: Find the transpose of a matrix
#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];
    int transpose[10][10];
    printf("Enter the matrix :");
    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    return 0;
}

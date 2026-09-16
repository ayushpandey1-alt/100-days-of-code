//Q75: Add two matrices

#include <stdio.h>

int main()
{
    int rows, cols;
    int a[10][10], b[10][10], sum[10][10];

    // Input size of first matrix
    scanf("%d %d", &rows, &cols);

    // Input first matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Input size of second matrix
    int rows2, cols2;
    scanf("%d %d", &rows2, &cols2);

    // Input second matrix
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}

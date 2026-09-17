//Q78: Find the sum of main diagonal elements for a square matrix

#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of main diagonal
    for (int i = 0; i < rows; i++)
    {
        sum = sum + matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}

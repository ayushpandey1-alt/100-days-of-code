//Q76: Check if a matrix is symmetric

#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];
    int symmetric = 1;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (rows != cols)
    {
        symmetric = 0;
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] != matrix[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0)
            {
                break;
            }
        }
    }

    if (symmetric == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}

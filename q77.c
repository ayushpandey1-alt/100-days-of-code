//Q77: Check if the elements on the diagonal of a matrix are distinct

#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];
    int distinct = 1;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is square
    if (rows != cols)
    {
        distinct = 0;
    }
    else
    {
        // Compare diagonal elements
        for (int i = 0; i < rows; i++)
        {
            for (int j = i + 1; j < rows; j++)
            {
                if (matrix[i][i] == matrix[j][j])
                {
                    distinct = 0;
                    break;
                }
            }

            if (distinct == 0)
            {
                break;
            }
        }
    }

    if (distinct == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}

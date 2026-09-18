//Q79: Perform diagonal traversal of a matrix

#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < rows + cols - 1; d++)
    {
        int startRow = d < cols ? 0 : d - cols + 1;
        int startCol = d < cols ? d : cols - 1;

        int i = startRow;
        int j = startCol;

        while (i < rows && j >= 0)
        {
            printf("%d ", matrix[i][j]);

            i++;
            j--;
        }
    }

    return 0;
}

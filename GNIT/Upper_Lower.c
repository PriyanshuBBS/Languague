#include <stdio.h>

void lower(int matrix[3][3], int row, int col); // Lower triangular matrix

void upper(int matrix[3][3], int row, int col); // Upper Triangular Matrix

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6},{7, 8, 9}};
    int row = 3, col = 3;

    printf("Lower triangular matrix: \n");
    lower(matrix, row, col);

    printf("\nUpper triangular matrix: \n");
    upper(matrix, row, col);

    return 0;
}

void upper(int matrix[3][3], int row, int col) // Upper Triangular Matrix
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                printf("0 ");
            }
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void lower(int matrix[3][3], int row, int col) // Lower triangular matrix
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                printf("0 ");
            }
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
// not running

#include <stdio.h>
int main()
{
    int row, col, i, j;
    printf("Enter the no. of rows in a matrix: ");
    scanf("%d", &row);
    printf("Enter the no. of columns in a matrix: ");
    scanf("%d", &col);

    int matrix[row][col];
    printf("Enter the Matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    int row_sum = 0, col_sum = 0;

    for (j = 0; j < col; j++)
    {
        row_sum += matrix[row / 2][j];
    }

    for (i = 0; i < row; i++)
    {

        col_sum += matrix[i][col / 2];
    }
    printf("sum of middle row = %d\n", row_sum);
    printf("sum of middle column = %d\n", col_sum);

    sum = row_sum + col_sum;
    printf("Sum of middle elements of row and column: %d", sum);
}
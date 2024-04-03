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

    int sum =0;
    printf("Lower Triangular matrix: is\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }
    printf("Sum of lower triangular elements is %d",sum);
}
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
    printf("Upper Triangular matrix: is\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if(j >= i) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
            } 
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("Sum of upper triangular elements is %d",sum);
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of both the square matrixs: ");
    scanf("%d", &n);
    int matrix1[n][n];
    printf("Enter the Matrix 1: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    int matrix2[n][n];
    printf("\nEnter the Matrix 2: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nDifference of matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",matrix1[i][j]-matrix2[i][j]);
        }
        printf("\n");
    }
}

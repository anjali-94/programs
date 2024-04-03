#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of a square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    printf("\n Sum of matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
    }
    printf("%d", sum);
}
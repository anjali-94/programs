#include <stdio.h>
int main()
{
    int arr[3][4] = { {3,4,5,6}, {8,7,6,5}, {5,6,7,8}};
    int i,j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j] );
        }
        printf("\n");
    }
}
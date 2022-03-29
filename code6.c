#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;
    printf("Enter the number of rows in 1st matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns in 1st matrix: ");
    scanf("%d", &col1);
    printf("Enter the number of rows in 2nd matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns in 2nd matrix: ");
    scanf("%d", &col2);

    int a[row1][col1], b[row2][col2], c[row1][col2];

    printf("Enter the 1st matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the 2nd matrix : \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("first matix is : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("second matix is : \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of this two matix is : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

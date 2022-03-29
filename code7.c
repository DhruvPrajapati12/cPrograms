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

    int a[row1][col1], b[row2][col2];

    printf("Enter the first matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix : \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int max = a[0][0];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }

        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                if (b[i][j] > max)
                {
                    max = b[i][j];
                }
            }
        }
    }
    printf("Maximum value is : %d", max);
}

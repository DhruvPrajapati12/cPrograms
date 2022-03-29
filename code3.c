#include <stdio.h>

void main()
{
    int n, min;
    printf("Enter the total numbers : ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d st number : ", i + 1);
        scanf("%d", &num[i]);
        min = num[0];
        for (int i = 0; i < n; i++)
        {
            if (num[i] < min)
            {
                min = num[i];
            }
        }
    }
    printf("Minimum number is %d", min);
}

#include <stdio.h>

void main()
{
    int n, min, indexNumber, flag = 0;
    printf("Enter the total numbers : ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d st number : ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("Enter the number want to find index : ");
    scanf("%d", &indexNumber);
    for (int i = 0; i < n; i++)
    {
        if (num[i] == indexNumber)
        {
            printf("Index of %d is %d", indexNumber, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is not in the array", indexNumber);
    }
}

#include <stdio.h>

void main()
{
    int n, marks[n], sum = 0;
    printf("Enter the  number of students : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of %d student : ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    printf("Sum of marks is : %d", sum);
}

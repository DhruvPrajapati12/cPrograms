#include <stdio.h>

void main()
{
    int marks[5] = {40, 50, 60, 70, 80};
    printf("Old Marks = %d", marks[2]);
    marks[2] = 90;
    printf("\nNew Marks = %d", marks[2]);
}

#include <stdio.h>
void swap(int *, int *);

void main()
{
	int a = 10, b = 20;
	printf("Before swaping a: %d , b: %d\n", a,b);
	swap(&a, &b);
	printf("After swaping a: %d , b: %d\n", a,b);
}

void swap(int *x, int *y)
{
	*x = 20;
	*y = 10;
}

#include <stdio.h>

int sum(int , int );
int (*ptr)(int, int);

void main()
{
	int a,b,c;
	printf("Enter the value of a and b: \n");
	scanf("%d %d", &a, &b);
	ptr = sum;
	c = (*ptr)(a, b);
	printf("Sum of %d and %d is %d\n", a,b,c);

/*	int *p, *q;
	p = &a;
	q = &b;
	c = *p + *q;
	printf("Sum of %d and %d is %d\n", a,b,c);
	printf("Sum of %d and %d is %d\n", *p,*q,c);
*/
}

int sum(int a, int b)
{
	int c = a + b;
	return c;
}

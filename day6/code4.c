#include <stdio.h>

void main()
{
	int a = 10, *p;
	p = &a;
	printf("Value of a: %d, %d\n", a, *p);
	printf("Address of variable a is: %p\n", p);
}

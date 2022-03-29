#include <stdio.h>

void main()
{
	int a = 10, *p, **q;
	p = &a;
	q = &p;
	printf("Values of a is %d, %d, %d\n", a, *p, **q);
	printf("Address of a is %p\n", p);
	printf("Address of p is %p\n",q);
}

#include <stdio.h>

extern int addition(int, int);
extern int multi(int, int);

void main()
{
	extern int p;
	printf("P is : %d\n", p);
	addition(5,6);
	multi(5,6);
	
}

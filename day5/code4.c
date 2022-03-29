//Create a function to swap the values of two variables.

#include <stdio.h>

void swap();

int a,b;

void main()
{
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("After swaping: \n");
	
	swap();

	printf("a is %d\n", a);
	printf("b is %d\n", b);
	
}

void swap()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

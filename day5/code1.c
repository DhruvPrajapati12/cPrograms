#include <stdio.h>

void addition(int,int);

void main()
{
	int a,b;
	printf("Enter two  numbers: ");
	scanf("%d %d", &a, &b);
	addition(a,b);
	printf("Thank You");
}

void addition(int x, int y)
{
	printf("Addition is: %d\n", x+y);
}

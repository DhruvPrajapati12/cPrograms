//WAP that defines a function to add first n numbers.

#include <stdio.h>
int fun(int);

void main()
{
	int n, sum;
	printf("Enter how many numbers till you want to add: ");
	scanf("%d", &n);
	sum = fun(n);
	printf("Sum: %d", sum);
	
	
}

int fun(int a)
{
	int sum = 0;
	for(int i = 1; i <= a; i++)
		{
			sum = sum + i;
		}
	return sum;
}

#include <stdio.h>

void main()
{
	int a[5], sum=0;
	printf("Enter the values: ");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < 5; i++)
	{
		sum = sum + *(a+i);
	}

	printf("Sum: %d\n", sum);
	
}

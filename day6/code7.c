#include <stdio.h>

void main()
{
	int a[5];
	printf("Enter the values: ");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < 5; i++)
	{
		for(int j = i+1; j < 5; j++)
		{
			if(*(a + i) > *(a + j))
			{
				int temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
			
		}
	}
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", *(a + i));
	}
}

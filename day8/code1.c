#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *fp, n, m;
	printf("How many employee: ");
	scanf("%d", &n);
	fp = (int *)malloc(sizeof(int)*n);
	for(int i = 0 ; i < n; i++)
	{
		printf("Enter age: ");
		scanf("%d", fp+i);
	}
	
	printf("how many employee more do you want to add: ");
	scanf("%d", &m);
	fp = (int *)realloc(fp, sizeof(int)*(n+m));
	
	for(int i = n ; i < n+m; i++)
	{
		printf("Enter age: ");
		scanf("%d", fp+i);
	} 
	for(int i = 0 ; i < n+m; i++)
	{
		printf("%d ", *(fp+i));
	}
	free(fp);
}

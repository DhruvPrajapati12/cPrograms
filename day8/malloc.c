#include <stdio.h>
#include <stdlib.h>

void main()
{
	/*int a;
	a = 25;
	printf("Value of a is %d", a);*/

	
	/*int *fp;
	fp = (int *)malloc(sizeof(int));
	printf("Dynamic memory allocated at %p\n", fp);
	printf("Initial value: %d\n", *fp);
	*fp = 25;
	printf("Value of a is %d\n", *fp);
	free(fp);*/
	
	int *fp,n,m, sum=0;
	printf("Enter how manu numbers: ");
	scanf("%d", &n);
	//fp = (int *)calloc(n, sizeof(int));
	fp = (int *)malloc(n*sizeof(int));

	for(int i = 0; i < n ; i++)
	{	
		scanf("%d", fp+i);
	}

	/*for(int i = 0;  i < n ; i++)
	{
		sum += *(fp+i);
	}
	printf("Sum : %d\n", sum);*/

	printf("How many numbers more yiu want to add: ");
	scanf("%d", &m);
	fp = (int *)realloc(fp, sizeof(int)*(m+n));

	for(int i = n; i < n+m ; i++)
	{	
		scanf("%d", fp+i);
	}
	for(int i = 0;  i < n+m ; i++)
	{
		sum += *(fp+i);
	}

	printf("Sum : %d\n", sum);
	
	free(fp);
}

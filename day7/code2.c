#include <stdio.h>

void main()
{	
	int marks;
	char name[20];
	FILE *fp;
	do	
	{
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter your marks: ");
	scanf("%d", &marks);
	
	fp = fopen("data.txt", "a");
	fprintf(fp, "Name: %s  Age: %d\n", name, marks);
	}while(marks <= 100);
	
	fclose(fp);
	
}

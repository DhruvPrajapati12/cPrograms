#include <stdio.h>

void main()
{
	FILE *fp1, *fp2;
	char c;
	fp1 = fopen("smart.txt", "w");
	fp2 = fopen("cool.txt", "w+");
	fprintf(fp1, "Dhruv is very smart ");
	fprintf(fp2, "Dhruv is very cool ");
	rewind(fp2);
	
	while(c != EOF)
	{
		c = getc(fp2);
		fprintf(fp1, "%c", c);
	}
	fclose(fp1);
	fclose(fp2);
		
}

#include <stdio.h>

void main()
{
	FILE *fp;
	char c;
	fp = fopen("Hello.txt", "r");
	//fprintf(fp, "Hello I am Dhruv Prajapati\n");

	do
	{
		c = getc(fp);
		printf("%c", c);
		
	}while(c != EOF);
	fclose(fp);
}

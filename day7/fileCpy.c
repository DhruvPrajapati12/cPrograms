#include <stdio.h>

void main()
{
	FILE *fp1, *fp2;
	char c;
	fp1 = fopen("Hello1.txt", "r");
	fp2 = fopen("Hello2.txt", "w");
	//fprintf(fp1, "Hello i am there\nHello i am there\n,Hello i am there\n");
	do
	{
		c = getc(fp1);
		putc(c, fp2);
	}while(c != EOF);
	fclose(fp1);
	fclose(fp2);
}

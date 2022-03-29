#include <stdio.h>

void main()
{
	FILE *fp;
	fp = fopen("reverse.txt", "w");
	fprintf(fp, "Hello this is file");
	
	
}

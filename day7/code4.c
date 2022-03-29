/* A file named data contains series of integer numbers. Write a C program to read all numbers from file and then write all the odd numbers into file named “odd” and write all even numbers into file named “even”. Display all the contents of these file on screen. Write a C program to read name and marks of n number of students and store them in a file. Write a C program to print contents in reverse order of a file. Write a C program to compare contents of two files. Write a C program to copy number of bytes from a specific offset to another file */


#include <stdio.h>

void main()
{
	FILE *fp1, *fp2;
	char c1, c2;
	int flag;
	fp1 = fopen("file1.txt", "w+");
	fp2 = fopen("file2.txt", "w+");
	fprintf(fp1, "Hello This is file1");
	fprintf(fp2, "Hello This is file1");
	rewind(fp1);
	rewind(fp2);

	while(c1 != EOF)
	{
		c1 = getc(fp1);
        	c2 = getc(fp2);
		if(c1 == c2)
		{
			flag = 1;;
		}else
		{
			flag = 0;
			break;
		
		}
	}

	

	if(flag == 1)
	{
		printf("File is same\n");
	}
	else if(flag == 0)
	{
		printf("File is not same\n");
	}
	
	fclose(fp1);
	fclose(fp2);
		
}

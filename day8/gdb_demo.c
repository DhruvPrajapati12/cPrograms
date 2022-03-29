#include <stdio.h>
void fun2();
void fun3();

int d = 0;

void fun1()
{
	int a = 10;
	d = 10;	
	fun2();
}

void fun2()
{
	int b = 20;
	d = 20;
	fun3();
}

void fun3()
{
	int c = 30;
	d = 30;
}

void main()
{
	printf("Welcome\n");
	fun1();
}




//WAP to count simple interest using function.

#include <stdio.h>
float interest(int, float, float);
void main()
{
	int p,  n;
	float i,r;
	p = 10000;
	r = 10;
	n = 2;
	i = interest(p,r,n);
	printf("Simple interest: %f", i);

}

float interest(int x, float y, float z)
{
	float interest = (x * y * z) / 100;
	return interest;
}

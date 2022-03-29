#include <stdio.h>
#include <string.h>
struct student
{
int id;
char name[20];
float cpi;
int backlog;
}s1;

union book
{
char title[10];
char author[20];
int pages;
float price;
}u1;

void main()
{
s1.id = 1;
strcpy(s1.name, "Dhruv");
s1.cpi = 8.50;
s1.backlog = 0;

printf("%d\n%s\n%f\n%d\n", s1.id, s1.name, s1.cpi, s1.backlog);

u1.pages = 300;
printf("Pages: %d\n", u1.pages);

u1.price = 350.00;
printf("Pages: %d\n", u1.pages);
printf("Price: %f\n", u1.price);
}

//use a pointer to change the value of a variable of type long
#include<stdio.h>
void main()
{
	long l=10;
	long *p;
	p=&l;
	*p=50;
	printf("value=%ld",l);
}

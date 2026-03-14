/*to create a pointer to an integer variable and demonstrate how 
the pointer can modify the value of the variable. */
#include<stdio.h>
void main()
{
	int a=10;
	int *p=&a;
	*p=20;
	printf(" value of a is:%d",a);
}

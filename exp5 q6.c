//an integer variable by reference to a function using a pointer. Modify the value in the function and print it in the main program.
#include<stdio.h>
void swap(int *x,int *y);
void main()
{
	int x=10,y=20;
	printf("value of x:%d and y:%d\n",x,y);
	swap(&x,&y);
	printf("value of x:%d and y:%d",x,y);
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

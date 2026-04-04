//a program to swap two numbers using call by reference. 
#include<stdio.h>
void swap(int *a,int *b);
void main()
{
	int x=10,y=2;
	printf("x=%d y=%d\n",x,y);
	swap(&x,&y);
	printf("x=%d  y=%d",x,y);
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

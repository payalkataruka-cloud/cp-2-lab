//program demonstrating pointer arithmetic with a double array.
#include<stdio.h>
#define size 5
void main()
{
	double s[size];
	int i,*p=s;
	for(i=0;i<size;i++)
	{
		printf("%u\n",p+(i*2));
	}
}

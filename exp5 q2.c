//use a pointer to access and print elements of an integer array
#include<stdio.h>
#define size 10
void main()
{
	int i,c=0,*p;
	int a[size];
	printf("enter the array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	printf("the array elements are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",*(p+i));
	}
}

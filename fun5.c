//to display the address of elements
#include<stdio.h>
int address(int a[],int size);
void main()
{
	int a[10],i,size;
	printf("enter the no of elements to enter");
	scanf("%d",&size);
	printf("enter elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	address(a,size);
}
int address(int b[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%u",&b[i]);
	}
}

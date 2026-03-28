 //to input an array of integers and print them using pointers.
#include<stdio.h>
void main()
{
	int a[100],i,size;
	int *p;
	printf("enter the no. elements:\n");
	scanf("%d",&size);
	printf("enter elements:\n");
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

//to add the elements of an array
#include<stdio.h>
int add(int [],int size);
void main()
{
	int a[]={4,6,9,2};
	add(a,4);
}
int add(int b[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+b[i];
	}
	printf("the sum of array is %d",sum);
}

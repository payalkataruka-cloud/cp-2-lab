//function to calculate the sum of all elements in an array using pointers
#include<stdio.h>
int sum_of_array(int *a,int n);
void main()
{
	int a[100],i,n;
	printf("enter the no. of elements:");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the sum of array elements is %d",sum_of_array(a,n));
}
int sum_of_array(int *a,int  n)
{
	int i,s=0;
	int *p;
	p=a;
	for(i=0;i<n;i++)
	{
		s+=*(p+i);
	}
	return s;
}

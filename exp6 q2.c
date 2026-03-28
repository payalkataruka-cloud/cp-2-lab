// function to find the largest element in an array using pointers. 
#include<stdio.h>
int largest(int *a,int n);
void main()
{
	int a[100],n,i;
	printf("enter the no. elements:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the largest element is %d",largest(a,n));
}
int largest(int *a,int n)
{
	int *p,i;
	p=a;
	int large=0;
	for(i=1;i<n;i++)
	{
		if(*(p+i)>*(p+large))
		{
			large=i;
		}
	}
	return *(p+large);
}

//to find the frequency of a given element in an array using pointers.
#include<stdio.h>
void main()
{
	int a[100],n,i,c=0,num;
	int *p;
	p=a;
	printf("enter the no. elements:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to find the frequency:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(*(p+i)==num)
		{
			c++;
		}
	}
	printf("the frequency of %d is %d",num,c);
}


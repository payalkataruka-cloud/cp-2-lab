//a function to sort an array of integers in ascending order using call by reference.
#include<stdio.h>
void ascending(int *a,int size);
void main()
{
	int a[]={9,2,5,8};
	int size,i;
	printf("enter no of element:");
	scanf("%d",&size);
	printf("enter elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	ascending(a,size);
	printf("after sorting:\n");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
}
void ascending(int *a,int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
				
			}
		}
	}
}

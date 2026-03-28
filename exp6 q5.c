//to sort an array in ascending order using pointers
#include<stdio.h>
int sort_array(int *a,int n);
void main()
{
	int a[100],n,i;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort_array(a,n);
	printf("after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int sort_array(int *a,int n)
{
	int i,j,temp;
	int *p;
	p=a;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
			    temp=*(p+j);
			    *(p+j)=*(p+j+1);
			    *(p+j+1)=temp;
			}
		}
		
	}
}

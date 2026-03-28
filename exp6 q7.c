//program to rotate the elements of an array to the left by one position using pointers.
#include<stdio.h>
void main()
{
	int a[100],n,i;
	int *p,temp;
	p=a;
	printf("enter the no. elements:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=*(p+i);
		*(p+i)=*(p+i+1);
		*(p+i+1)=temp;
	}
	*(p+n-1)=temp;
	printf("after rotation:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
}


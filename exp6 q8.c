//a program to count the number of even and odd elements in an array using pointers.
#include<stdio.h>
void main()
{
	int a[100],n,i;
	int *p;
	p=a;
	int even=0,odd=0;
	printf("enter the no. elements:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("no of even=%d and odd=%d",even,odd);
}

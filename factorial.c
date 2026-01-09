// factorial of a no
#include<stdio.h>
int fact(int);
void main()
{
	int n,x;
	printf("enter a num:");
	scanf("%d",&n);
	x=fact(n);
	printf("%d is the factorial of %d",x,n);
}
int fact(int a)
{
	int fac=1,i;
	for(i=1;i<=a;i++)
	{
		fac=fac*i;
	}
	return fac;
}

//to display the elements of an array
#include<stdio.h>
int display(int a[],int size);
void main()
{
	int a[100],size,i;
	printf("enter the no. of elments to enter");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	display(a,size);
}
int display(int b[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",b[i]);
	}
}

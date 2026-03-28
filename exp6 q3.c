//a program to reverse the elements of an array in-place using pointers. 
#include<stdio.h>
void reverse_array(int *start,int *end);
void main()
{
	int a[100],n=5;
	int i;
	int *start=a;
	int *end=a+n-1;
	printf("enter array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse_array(start,end);
	printf("the reversed array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
void reverse_array(int *start,int *end)
{
	int i,temp;
	int n=5;
	while(start<end)
	{
		temp=*start;
	    *start=*end;
        *end=temp;
		start++;
		end--;
	}
}

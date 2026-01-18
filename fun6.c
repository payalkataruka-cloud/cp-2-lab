//to dispaly the minimum no of an array
#include<stdio.h>
int minarray(int [],int);
void main()
{
	int a[]={4,5,9,10,2};
	minarray(a,5);
}
int minarray(int b[],int size)
{
	int i,min;
	min=b[0];
	for(i=0;i<size;i++)
	{
		if(b[i]<min)
		{
			min=b[i];
		}
	}
	printf("the minimum no in array is %d",min);
}

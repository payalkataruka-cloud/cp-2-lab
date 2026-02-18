#include<stdio.h>
void main()
{
	int a[100],index[100],i,j,max=0,c=0;
	char ch[]="my name is payal kataruka";
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]!=32)
		{
			c++;//my
		}
		else
		{
			a[i]=i;//
			a[i]=0;
			if(i>max)
			{
				max=i;
				index[i]=i;
			}
		}
	}
	printf("%d %d",max,index);
}

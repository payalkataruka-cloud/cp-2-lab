#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="abc";
	char a[]="ABC";
	char merg[100];
	int i=0,j=0,k=0;
	while(s[i]!=0||a[j]!=0)
	{
		if(s[i]!=0)
		{
			merg[k]=s[i];
			k++;
			i++;
		}
		if(a[j]!=0)
		{
			merg[k]=a[j];
			k++;
			j++;
		}
	}
	merg[k]=NULL;
	printf("%s",merg);
}

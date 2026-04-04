//
#include<stdio.h>
#include<string.h>
void replace(char *a);
void main()
{
	char str[]="hello world";
	printf("the previous string is %s\n",str);
	replace(&str);
	printf("the modified string is %s",str);
}
void replace(char *a)
{
	int i;
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==32)
		{
			a[i]='_';
		}
	}
}

#include<stdio.h>
void count(char s[]);
void main()
{
	char s[]="My name is Payal Kataruka";
	count(s);
}
void count(char ch[])
{
	int i,c=0;
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]==32)
		{
			c++;
		}
	}
	printf("the no. of words are :%d",c+1);
}

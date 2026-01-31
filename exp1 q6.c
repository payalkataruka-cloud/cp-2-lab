#include<stdio.h>
void count(char s[]);
void main()
{
	char s[]="My name is Payal Kataruka";
	count(s);
	printf("%s",s);
}
void count(char ch[])
{
	int i;
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]==32)
		{
			ch[i]='-';
		}
	}
}

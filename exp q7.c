#include<stdio.h>
void character(char s[]);
void main()
{
	char s[]="silicon university";
	character(s);
}
void character(char ch[])
{
	int i,c=0,w;
	printf("enter a character to count:");
	scanf("%c",&w);
	for(i=0;ch[i]!=0;i++)
	{
		if (ch[i]==w)
		{
			c++;
		}
	}
	printf("the occurence of charcater %c is %d",w,c);
}

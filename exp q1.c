#include<stdio.h>
void print_string(char ch[]);
void main()
{
	char ch[]="hello world";
	print_string(ch);
}
void print_string(char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	printf("%c",s[i]);
}

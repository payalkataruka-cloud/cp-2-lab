#include<stdio.h>
void reverse_string(char ch[]);
void main()
{
	char ch[]="silicon";
	reverse_string(ch);
}
void reverse_string(char s[])
{
	printf("%s",strrev(s));
}

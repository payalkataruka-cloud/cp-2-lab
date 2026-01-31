#include<stdio.h>
void count_vowel(char s[]);
void main()
{
	char s[]="apple";
	count_vowel(s);
}
void count_vowel(char c[])
{
	int i;
	int v=0;
	for(i=0;c[i]!=0;i++)
	{
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
		{
			v++;
		}
	}
	printf("%d",v);
}

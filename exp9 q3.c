//program to convert all characters of a string to uppercase using call by reference. 
#include<stdio.h>
#include<string.h>
void upper(char *a);
void main()
{
	char str[]="hello";
	printf("the previous string is %s\n",str);
	upper(&str);
	printf("the modified string is %s",str);
}
void upper(char *a)
{
	return strupr(a);
}

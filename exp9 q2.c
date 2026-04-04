//a program to reverse a string using call by reference.  
#include<stdio.h>
#include<string.h>
void reverse(char *a);
void main()
{
	char str[]="hello";
	printf("the previous string is %s\n",str);
	reverse(&str);
	printf("the reversed string is %s",str);
}
void reverse(char *a)
{
	return strrev(a);
}

/*the use of pointers with character variables. 
Include both reading and printing the character via the pointer. */
#include<stdio.h>
void main()
{
	char s;
	char *p;
	p=&s;
	printf("enter the character:");
	scanf("%c",p);
	printf("charcater=%c",*p);
}

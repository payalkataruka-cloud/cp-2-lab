// to initialise array of structure
#include<stdio.h>
#include<string.h>
#define size 2
struct student{
	char name[50];
};
main()
{
	struct student s[size];
	int i;
	printf("enter the name of student:\n");
	for(i=0;i<size;i++)
	{
		gets(s[i].name);
	}
	for(i=0;i<size;i++)
	{
		printf("\nsl no.:%d  %s",i,s[i].name);
	}
	
}

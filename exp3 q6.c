//use of typedef
#include<stdio.h>
#include<string.h>
#define size 2
typedef struct v
{
	char name[30];
	char gender[10];
}voter;
main()
{
	voter v[10];
	int i;
	printf("enter details of voter:");
	for(i=0;i<size;i++)
	{
		gets(v[i].name);
		scanf("%s",&v[i].gender);
		//fflush(stdin);
	}
	for(i=0;i<size;i++)
	{
		printf("\n name:%s\t gender:%s",v[i].name,v[i].gender);
	}
}

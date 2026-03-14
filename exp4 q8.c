// to initialise array of structure
#include<stdio.h>
#include<string.h>
#define size 2
struct student{
	char name[50];
	char sic[20];
	int marks;
};
main()
{
	struct student s[size];
	int i;
	int highest=0;
	printf("enter the details of student:\n");
	for(i=0;i<size;i++)
	{
		printf("student name:\n");
		gets(s[i].name);
		printf("student sic:\n");
		gets(s[i].sic);
		printf("student marks:\n");
		scanf("%d",&s[i].marks);
		fflush(stdin);
	}
	for(i=1;i<size;i++)
	{
		
		if(s[i].marks>s[highest].marks)
		{
			highest=i;
		}
		
	}
	printf("\nsl no.:%d NAME: %s\n SIC:%s \n MARKS:%d\n",i,s[highest].name,s[highest].sic,s[highest].marks);
}

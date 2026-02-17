//program to define a structure
#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int roll;
	float mark;
};
main()
{
	struct student s1,s2;
	printf("enter student details:");
	gets(s1.name);
	scanf("%d %f",&s1.roll,&s1.mark);
	printf("\n%s %d %0.2f",s1.name,s1.roll,s1.mark);
	gets(s2.name);
	scanf("%d %f",&s2.roll,&s2.mark);
	printf("%s %d %0.2f",s2.name,s2.roll,s2.mark);
}

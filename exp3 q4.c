//create a  nested structure to store student details
#include<stdio.h>
#include<string.h>
struct student
{
	struct address
	{
		char dis[50];
		char state[50];
		int pin;
	};
	struct address a1;
	char name[50];
	int roll;
}
main()
{
	struct student s1;
	printf("enter name and roll no. of student:");
	scanf("%s %d",&s1.name,&s1.roll);
	printf("enter the address:");
	scanf("%s %s %d",&s1.a1.dis,&s1.a1.state,&s1.a1.pin);
	printf("\n name:%s\n roll:%d\n district:%s\n state:%s\n pincode:%d",s1.name,s1.roll,s1.a1.dis,s1.a1.state,s1.a1.pin);
}

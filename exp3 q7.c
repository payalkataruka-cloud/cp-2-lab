//to store details of multiple employees
#include<stdio.h>
#include<string.h>
#define size 2
struct employee
{
	struct department
	{
		char dep[50];
		char d_id[20];
	};
	struct department d1;
	char name[50];
	char e_id[20];
	long ph;
}
main()
{
	struct employee e[size];
	printf("enter details of employee:");
	int i;
	for(i=0;i<size;i++)
	{
		gets(e[i].name);
		scanf("%s",&e[i].e_id);
		scanf("%ld",&e[i].ph);
		scanf("%s",&e[i].d1.dep);
		scanf("%s",&e[i].d1.d_id);
	}
	for(i=0;i<size;i++)
	{
		printf("\n NAME:%s\n E_ID:%s\n PHN NO.:%ld\n DEP:%s\n DEP_ID:%s",&e[i].e_id,&e[i].ph,&e[i].d1.dep,&e[i].d1.d_id);
	}

}


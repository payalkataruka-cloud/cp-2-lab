// to write a nested list to store employee details
#include<stdio.h>
#include<string.h>
#define size 3
struct employee
{
	struct department
	{
	char dep[50];	
	};
	struct department d1;
	char name[50];
	char e_id[20];
	int salary;
};
void main()
{
	struct employee e[size],temp;
	int i,j;
	printf("enter employee details:\n");
	for(i=0;i<size;i++)
	{
		printf("enter employee name:\n");
		gets(e[i].name);
		printf("enter employee id:\n");
		gets(e[i].e_id);
		printf("enter salary:\n");
		scanf("%d\n",e[i].salary);
		printf("enter department name:\n");
		scanf("%s",e[i].d1.dep);
		fflush(stdin);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(e[i].salary>e[j].salary)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}	
	}
	printf("\n Employee sorted by salary\n");
	for(i=0;i<size;i++)
	{
		printf("\n NAME: %s",e[i].name);
		printf("\n E_ID: %s",e[i].e_id);
		printf("\n SALARY:%d",e[i].salary);
		printf("\n DEPARTMENT:%s",e[i].d1.dep);
	}
}


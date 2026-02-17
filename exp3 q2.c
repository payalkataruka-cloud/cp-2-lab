//to define a structure to store dd/mm/yyyy
#include<stdio.h>
#include<string.h>
struct date
{
	int day,month,year;
};
void main()
{
	struct date d1;
	printf("enter date:\n");
	scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
	printf("%d/%d/%d",d1.day,d1.month,d1.year);
}

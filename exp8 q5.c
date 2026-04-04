//structure to store details of book. Store and print the details of 5 books using pointer. 
#include<stdio.h>
#include<stdio.h>
struct book{
	char name[50];
	char author[30];
	int price;
};
void main()
{
	struct book b[5];
	struct book *p=b;
	int i;
	printf("enter 5 book details\n");
	for(i=0;i<5;i++)
	{
		printf("enter name:\n");
		gets(b[i].name);
		printf("enter author name:\n");
		fflush(stdin);
		gets(b[i].author);
		printf("enter price:\n");
		scanf("%d",&b[i].price);
		fflush(stdin);
	}
	for(i=0;i<5;i++)
	{
		printf("name of the book:%s\n author: %s\n price:%d\n",(p+i)->name,(p+i)->author,(p+i)->price);
	}
	
}

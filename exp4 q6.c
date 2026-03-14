//structure to store details of books
#include<stdio.h>
#include<string.h>
#define size 2
struct book{
	char title[20];
	char author[20];
	int price;
};
main()
{
	struct book b1[size];
	int i;
	printf("enter details of book title,author,price\n");
	for(i=0;i<size;i++)
	{
		printf("enter title of the book:\n");
		gets(b1[i].title);
		printf("enter author name:\n");
		gets(b1[i].author);
		printf("enter price of the book:\n");
		scanf("%d",&b1[i].price);
		fflush(stdin);
	}
	for(i=0;i<size;i++)
	{
		printf("\n TITLE: %s\n AUTHOR:%s\n PRICE:Rs.%d",b1[i].title,b1[i].author,b1[i].price);
	}
}

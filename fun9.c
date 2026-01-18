//to print only the vowels from an array
#include<stdio.h>
char vowel(char [],int );
void main()
{
	char a[100];
	int i,size;
	printf("enter no of char to enter");
	scanf("%d",&size);
	printf("enter char of array");
	for(i=0;i<size;i++)
	{
		scanf("%c",&a[i]);
	}
	vowel(a,4);
}
char vowel(char b[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(b[i]=="a"||b[i]=="A"||b[i]=="e"||b[i]=="E"||b[i]=="i"||b[i]=="I"||b[i]=="o"||b[i]=="O"||b[i]=="u"||b[i]=="U")
		{
			printf("%c",b[i]);
		}
	}
}

//a program to reverse the digits of a given integer using call by reference.
#include<stdio.h>
void change(int *a);
void main()
{
	int num;
	printf("enter a no:");
	scanf("%d",&num);
	change(num);
	printf("reverse number:%d",num);
 } 
 void change(int *a)
 {
 	int rev=0,num;
 	while(num !=0)
 	{
 		num=num%10;
 	    rev=num*10;
 	    num=num/10;
	}
 }

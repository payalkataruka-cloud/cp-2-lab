#include<stdio.h>
#include "math.h"
int add(int a,int b);
void main()
{
int result=add(2,3);
printf("the sum is:%d",result);
}
int add(int a,int b)
{
return a+b;
}

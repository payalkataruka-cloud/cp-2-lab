#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
int c=5;
if(c<argc)
{
printf("it exceeds the minimum argument required");
}
else if(c>argc)
{
printf("it is less than the minimum requirement");
}
else
{
printf("it satifies the requirement");
}
}
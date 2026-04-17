#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
int i ,c=0;
for(i=0;i<argc;i++)
{
c++;
}
printf("the no. of command-line argument passed=%d\n",c);
}

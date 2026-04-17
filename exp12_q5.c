#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc, char *argv[])
{
int i;
for(i=0;i<argc;i++)
{
strupr(argv[i]);
printf("%s\n",argv[i]);
}
}
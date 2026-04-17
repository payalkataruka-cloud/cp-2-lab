#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
int i ,c,sum=0;
for(i=0;i<argc;i++)
{
c=atoi(argv[i]);
sum+=c;
}
printf("sum=%d\n",sum);

}

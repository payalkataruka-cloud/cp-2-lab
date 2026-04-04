//create a structure named Complex and define a function incrComplex() to increment the value of both real and imaginary members by 1.
#include<stdio.h>

struct complex{
	int c,i;
};
void complex(struct complex *c);
void complex(struct complex *c)
{
	printf("enter the complex  no:");
	scanf("%d %d",&c->c,&c->i);
	c->c=c->c+1;
	c->i=c->i+1;
}
main()
{
	struct complex c1;
	complex(&c1);
	printf("%d %di",c1.c,c1.i);
}


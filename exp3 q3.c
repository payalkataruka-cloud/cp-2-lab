//to add complex no
struct complex
{
	int c,i;
};
void main()
{
	struct complex c1,c2,c3;
	printf("enter complex no c1:\n");
	scanf("%d %d",&c1.c,&c1.i);
	printf("enter complex no c2:\n");
	scanf("%d %d",&c2.c,&c2.i);
	c3.c=c1.c+c2.c;
	c3.i=c1.i+c2.i;
	printf("%d + %di",c3.c,c3.i);
}

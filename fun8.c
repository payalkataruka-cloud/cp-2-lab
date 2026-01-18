// to add a scalar to an array
int scalar(int [],int size);
void main()
{
	int a[]={2,12,45,5};
	scalar(a,4);
}
int scalar(int b[],int size)
{
	int i,s;
	printf("enter a scalar to multiply");
	scanf("%d",&s);
	for(i=0;i<size;i++)
	{
		printf("%d\t",s*b[i]);
	}
	
}

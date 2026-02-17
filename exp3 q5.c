//demonstrate the use of bitfield
#include<stdio.h>
struct test
{
	int t1:2;
};
main()
{
	struct test t1={676};
	printf("%d",t1);
	
}

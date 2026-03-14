//to declare a bitfield from range 0 to 15
#include<stdio.h>
struct test{
	unsigned int bit:4;
};
void main()
{
	struct test t1;
	t1.bit=10;
	printf("%u",t1.bit);
}

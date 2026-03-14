//a union contain a bit-field
#include<stdio.h>
union data{
	struct{
		unsigned int a:3;
		unsigned int b:4;
	}bit;
	unsigned char value;
};
main()
{
	union data d1;
	d1.bit.a=5;
	d1.bit.b=10;
	printf("Bit field values:\n");
	printf("a=%d\n",d1.bit.a);
	printf("b=%d\n",d1.bit.b);
}

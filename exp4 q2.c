//to use enumeration to represent the days of the week
#include<stdio.h>
#include<string.h>
enum days{
	sunday=1,
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
};
main()
{
	enum days today=friday;
	printf("Todays day no is %d",today);
}

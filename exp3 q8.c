// to create a 2d point use to calculate distance
#include<stdio.h>
#include<math.h>
#include<string.h>
struct point
{
	int x1,y1,x2,y2;
};
main()
{
	struct point p1={1,1};
	struct point p2={1,1};
	int a,b,c;
	float d;
	a=(p2.x2-p1.x1)*(p2.x2-p1.x1);
	b=(p2.y2-p1.y1)*(p2.y2-p1.y1);
	c=a+b;
	d=sqrt(c);
	printf("%f",d);
	
}

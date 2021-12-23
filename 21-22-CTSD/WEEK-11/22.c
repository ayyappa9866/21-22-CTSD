#include<stdio.h>
struct Point
{
	int x,y,z;
};
int main()
{
	struct Point p1={.y=0,.z=1,.x=2};//we can initialise in random order using (.) operator
	struct Point p2={.x=20};
	printf("x=%d,y=%d,z=%d\n",p1.x,p1.y,p1.z);
	printf("x=%d",p2.x);
	return 0;
}
//output-2 0 1 20

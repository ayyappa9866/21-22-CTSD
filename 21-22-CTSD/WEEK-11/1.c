#include<stdio.h>
#include<math.h>
int main()
{
	struct point
	{
		float x;
		float y;
	};
	struct point p1,p2;
	float distance;
	printf("Enter point 1:\n");
	scanf("%f%f",&p1.x,&p1.y);
	printf("Enter point 2:\n");
	scanf("%f%f",&p2.x,&p2.y);
	distance=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	printf("Distance between 2 points=%f\n",distance);
	//printf("no of bytes allocated for p1=%d\n",sizeof(p1));
	return 0;
}

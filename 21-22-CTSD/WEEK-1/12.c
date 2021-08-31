#include<stdio.h>
void age(int,int,int,int);
void age(int pm1,int py1,int bm1,int by1)
{
	int fy,fm;
	if(pm1<bm1)
	{
		py1=py1-1;
		pm1=pm1+12;
	}
	fy=py1-by1;
	fm=pm1-bm1;
	printf("%d Years and %d Months",fy,fm);
}
int main()
{
	int pm,py,bm,by;
	pm=8;
	py=2021;
	bm=2;
    by=2005;
    age(pm,py,bm,by);
    return 0;
}

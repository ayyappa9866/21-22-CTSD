#include<stdio.h>
float calHeight(int);//prototype declaration of a function
float calHeight(int days)
{
	float res;
	res= (2 * days - 1) * 2.54;
	return res;
}
int main()
{
	int n;
	float ans;
	n=7;
	ans=calHeight(n);
	printf("Height of the tree in centimeters=%f",ans);
	return 0;
}

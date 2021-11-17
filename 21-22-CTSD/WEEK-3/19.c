#include<stdio.h>
int h[3]={50,60,70};
int comparision();
int comparision ()
{
	int min=h[0],max=h[0];
	min=h[1]<min?h[1]:min;
	max=h[1]>max?h[1]:max;
	min=h[2]<min?h[2]:min;
	max=h[2]>max?h[2]:max;
	printf("The maximum score=%d\nThe minimum score=%d",max,min);
}
int main()
{
	comparision();
	return 0;
}

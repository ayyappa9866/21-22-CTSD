#include<stdio.h>
void main()
{
	auto int num;
	num=20;
	{
		auto int num;
		num=60;//num=60 is local within this block only
		printf("Num: %d\n",num);//1st output is 60
	}
	printf("Num: %d\n",num);//2nd output is 20
}
/*the life time of automatic storage 
classes is within the block */

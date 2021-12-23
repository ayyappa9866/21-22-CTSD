#include<stdio.h>
struct Complex
{
	int a;
	int b;
};
/*
int main()
{
	
	struct Complex p1,p2;
	printf("Enter first complex number:\n");
	scanf("%d %d",&p1.a,&p1.b);
	printf("Enter second complex number:\n");
	scanf("%d %d",&p2.a,&p2.b);
	printf("Addition result=%d+i(%d)\n",p1.a+p2.a,p1.b+p2.b);
	printf("Subtraction result=%d+i(%d)\n",p1.a-p2.a,p1.b-p2.b);
	return 0;
}*/
void CalSum(struct Complex p1,struct Complex p2)
{
	printf("Addition result=%d+i(%d)\n",p1.a+p2.a,p1.b+p2.b);
}
void CalDifference(struct Complex p1,struct Complex p2)
{
	printf("Subtraction result=%d+i(%d)\n",p1.a-p2.a,p1.b-p2.b);
}
int main()
{
	struct Complex p1,p2;
	printf("Enter first complex number:\n");
	scanf("%d %d",&p1.a,&p1.b);
	printf("Enter second complex number:\n");
	scanf("%d %d",&p2.a,&p2.b);
	CalSum(p1,p2);
	CalDifference(p1,p2);
	return 0;
}

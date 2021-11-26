/*#include<stdio.h>
int main()
{
	int n,k,pos;
	printf("Enter any number=");
	scanf("%d",&n);
	printf("Enter position bit(0 to 31)=");
	scanf("%d",&pos);
	k=n>>pos;
	if((k&1)==1)
	printf("%d bit is setbit",pos);
	else
	printf("%d bit is not setbit",pos);
	return 0;
}*/
#include<stdio.h>
void posBit(int n,int pos)
{
	int k=n>>pos;
	if((k&1)==1)
	printf("%d bit is setbit",pos);
	else
	printf("%d bit is not setbit",pos);
}
int main()
{
	int num,p;
	printf("Enter any number=");
	scanf("%d",&num);
	printf("Enter position bit(0 to 31)=");
	scanf("%d",&p);
	posBit(num,p);
	return 0;
}

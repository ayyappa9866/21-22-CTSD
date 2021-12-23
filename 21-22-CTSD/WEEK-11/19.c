#include<stdio.h>
struct Details
{
	int idnum;
	char name[30];
	int as;
	int cible;
};
void LoanEligibility(struct Details p1)
{
	if(p1.as!=0&&p1.cible>340)
	{
		printf("customer %s is eligible for bank loan",p1.name);
	}
	else
	printf("customer %s is not eligible for bank loan",p1.name);
	
}
int main()
{
	struct Details p1;
	printf("Enter idnum name adhar status cible");
	scanf("%d %s %d %d",&p1.idnum,&p1.name,&p1.as,&p1.cible);
	LoanEligibility(p1);
	return 0;
}

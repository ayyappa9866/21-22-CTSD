#include<stdio.h>
int main()
{
	struct lab
	{
		int new;
		int rep;
	};
	struct lab l1,l2,l3,l4,l5;
	int totalnew,totalrep;
	printf("Enter lab-1 status report:\n");
	scanf("%d%d",&l1.new,&l1.rep);
	printf("Enter lab-2 status report:\n");
	scanf("%d%d",&l2.new,&l2.rep);
	printf("Enter lab-3 status report:\n");
	scanf("%d%d",&l3.new,&l3.rep);
	printf("Enter lab-4 status report:\n");
	scanf("%d%d",&l4.new,&l4.rep);
	printf("Enter lab-5 status report:\n");
	scanf("%d%d",&l5.new,&l5.rep);
	totalnew=l1.new+l2.new+l3.new+l4.new+l5.new;
	totalrep=l1.rep+l2.rep+l3.rep+l4.rep+l5.rep;
	printf("Total no of new systems=%d\n",totalnew);
	printf("Total no of Repairable systems=%d\n",totalrep);
	return 0;
}

#include<stdio.h>
int calRemaining(int,int);
int calRemaining(int tot,int att)
{
	int remclasses;
	remclasses=(tot*70/100)-att;
	return remclasses;
}
int main()
{
	int total,attended,ans;
	printf("Total no of classes=");
	scanf("%d",&total);
	printf("Total no of classes attended=");
	scanf("%d",&attended);
	ans=calRemaining(total,attended);
	printf("Remaining classes to attend=%d",ans);
return 0;
}

#include<stdio.h>
void findhealthstatus(int t,char  c)
{
	if(t>99 && c=='c')
	{
		printf("send to COVID19 center");
	}
	else if(t>99 && c=='n'){
		printf("QUARANTINE center");
	}
	else if(t<99 && c=='c'){
		printf("allocate separate workplace");
	}
	else {
		printf("regular workplace");
	}
}
int main()
{
	int temp;
	char cold;
	printf("enter temperature=");
	scanf("%d",&temp);
	printf("enter health condition (if there is cold enter c else enter n)=");
	scanf(" %c",&cold);
	findhealthstatus(temp,cold);
	return 0;
}

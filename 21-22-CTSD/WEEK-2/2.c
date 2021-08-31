#include<stdio.h>
void printBill(float,float,float,float,float,float,float);
void printBill(float aw,float ac,float mw,float mc,float pw,float pc,float amount)
{
	float res,bal;
	res=aw*ac+mw*mc+pw*pc;
	bal=amount-res;
	printf("%-5s%-18s%12s%15s%15s",
	"S.No","Name Of The Item","Quantity","Price Per Kg","Total Amount");
	printf("\n%-5d%-18s%12f%15f%15f",1,"Apple",aw,ac,aw*ac);
	printf("\n%-5d%-18s%12f%15f%15f",2,"Mango",mw,mc,mw*mc);
	printf("\n%-5d%-18s%12f%15f%15f",3,"Potato",pw,pc,pw*pc);
	printf("\n\n%5s%18s%12s%15s%15f"," "," "," ","Total",res);
	printf("\n\n%5s%18s%12s%15s%15f"," "," "," ","Return Amount",bal);
	
}
int main()
{
	float aq,ap,mq,mp,pq,pp,amount;
	printf("Enter Apple Quantity and Price Per Kg=");
	scanf("%f%f",&aq,&ap);
	printf("Enter Mango Quantity and Price Per Kg=");
	scanf("%f%f",&mq,&mp);
	printf("Enter Potato Quantity and Price Per Kg=");
	scanf("%f%f",&pq,&pp);
	printf("Enter Amount=");
	scanf("%f",&amount);
	printBill(aq,ap,mq,mp,pq,pp,amount);
	return 0;
}

#include<stdio.h>
int caltotal(int q,char f)
{
	int total;
	switch(f)
	{
		case'B':
			total= 200*q;
		break;
		case'F':
			total=50*q;
		break;
	    case'P':
	    	total=500*q;
	    break;
		case'S':
	    	total=150*q;
	    break;
		default:
			printf("INVALID INPUT");
		break;
	}
	return total;
}
int main()
{
	int quantity,ans;
	char fooditem;
	printf("enter the food item and its quantity=");
	scanf("%c%d",&fooditem,&quantity);
	ans=caltotal(quantity,fooditem);
	printf("the total charges=%d",ans);
	return 0;
}


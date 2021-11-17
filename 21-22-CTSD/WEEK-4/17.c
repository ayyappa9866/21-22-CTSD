#include<stdio.h>
void calWages(int age,int days,int c)
{
	if(18<=age<30){
		if(c=='M'){
			printf("the wages=%d",(700*days));
		}
		else{
			printf("the wages=%d",(750*days));
		}
	}
	else if(30<=age<=40)
	{
		if(c=='M'){
		
		    printf("the wages=%d",(800*days));
	    }
		
	    else {
	    	printf("the wages=%d",(850*days));
		}
	}
}
int main()
{
	int d,a;
	char wage;
	printf("enter the number of days and age=");
	scanf("%d%d",&d,&a);
	printf("enter the gender=");
	scanf(" %c",&wage);
	calWages(a,d,wage);
	return 0;
}

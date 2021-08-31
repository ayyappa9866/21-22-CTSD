#include<stdio.h>
int getBallColor(int);
int getBallColor(int n)
{
	int res;
	if(n%2==0){
		res=1;	
	}
	else{
		res=0;	
	}
	return res;
}
int main()
{
	int num,ans;
	num=11;
	ans=getBallColor(num);
	if(ans){
		printf("WHITE");
	}
	else{
		printf("BLACK");
	}
	return 0;
}

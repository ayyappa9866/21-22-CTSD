/* 1 0 1 1 (11)
   1 1 1 1 (15) pow(2,noofbits)-1
   
#include<stdio.h>
int main()
{
	int n,ans,noofbits=0,p;
	printf("Enter any +ve number=");
	scanf("%d",&n);
	p=n;
	//noofbits=(int)log2(n)+1;
	while(n>0)
	{
		noofbits++;
		n>>=1;
	}
	ans=(1<<noofbits)-1;// pow(2,noofbits)-1
	if(p==ans)
	printf("YES");
	else
	printf("NO");
	return 0;
}*/
#include<stdio.h>
void allSetBits(int n)
{
	int ans,noofbits=0,p;
	p=n;
	//noofbits=(int)log2(n)+1;
	while(n>0)
	{
		noofbits++;
		n>>=1;
	}
	ans=(1<<noofbits)-1;// pow(2,noofbits)-1
	if(p==ans)
	printf("YES");
	else
	printf("NO");
	
}
int main()
{
	int num;
	printf("Enter any +ve number=");
	scanf("%d",&num);
	allSetBits(num);
	return 0;
}

#include<stdio.h>
void noofsocks(int t)
{
	int n;
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",n+1);
	}
}
int main()
{
	int p;
	scanf("%d",&p);
	noofsocks(p);
	return 0;
}

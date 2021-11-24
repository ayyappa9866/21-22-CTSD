#include<stdio.h>
void PrintTables(int n)
{
	int i=1;
	while(i<=10)
	{
		printf("%d x %d = %d\n",n,i,i*n);
		i++;
    }
}
int main()
{
	int num;
	scanf("%d",&num);
	PrintTables(num);
	return 0;
}

#include<stdio.h>
void swap(int *c,int *d) // formal arguments
{
	*c= *c ^ *d;
	*d= *c ^ *d;
	*c= *c ^ *d;
}
int main()
{
	int a,b;
	printf("Enter any 2 numbers=");
	scanf("%d%d",&a,&b);
    swap(&a,&b);// actual arguments
	printf("After Swap a=%d and b=%d",a,b);
	return 0;
}

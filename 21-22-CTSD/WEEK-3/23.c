#include<stdio.h>
int main()
{
	register int i=2;
	static char ch='A';//asci value of A=65
	auto float j;
	int k; 
	printf("%d %c %f  %d ",i,ch,j,k);//1st o/p 2 A 0 garbage value since it is not initialized
	k=++ch&&i;//++ch=66 i=2 so ++ch&&i=1
	printf(" %d",k);//1
	j=i-- + ++k*2;//i--=2,(++k)*2=2*2,i-- + ++k*2=6
	printf(" %d %f",k,j);//2 6
	return 0;
}
//for static variable the value persist b/w functions

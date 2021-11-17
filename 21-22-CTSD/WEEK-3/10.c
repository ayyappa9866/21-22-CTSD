#include<stdio.h>
void staticDemo()
{
	static int i;
	{
		static int j=1;
		printf("%d ",j);//1st o/p 1,3rd o/p 2
		j=j+1;//j is increased by 1
	}
	printf("%d\n",i);//2nd o/p 0,4rth o/p 1
	i=i+1;//i is increased by 1
}
int main()
{
	staticDemo();
	staticDemo();
}
/*for static variable the value persist 
within the function calls.Default initial value of a
 static variable is 0 so the1st output of i is 0*/

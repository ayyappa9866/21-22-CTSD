#include<stdio.h>
void sun(char);
void fun(int);
int main()
{
	char ssc = 12356;
	sun(ssc);
}
void sun(char s)
{
	char f=s;
	printf("%d \n",f);
	char ss=49;
	fun(ss);
}
void fun(int s)
{
	int ss=s;
	printf("%d",s);
}
/*1st o/p =68,2nd o/p=49 
here the s value is greater than 255 ie 12356
so..
New value = X % 256
If number is Y where Y is less than 0 then
New value = 256 – (Y% 256)
so the new value of s is 
s=12356%256=68
if you not understood open word document*/



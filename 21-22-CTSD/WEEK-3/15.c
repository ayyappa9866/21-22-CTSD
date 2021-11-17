#include<stdio.h>
int main()
{
	register int n;
	n=20;
	int *ptr;
	ptr=&n;
	printf("adress of n :%u",ptr);
	return 0;
}
//compiler error since it is invalid to acess cpu register addres.it can acess value.

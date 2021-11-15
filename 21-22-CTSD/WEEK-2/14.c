#include<stdio.h>
void displayArray(char *);
void displayArray(char *ptr)
{
	printf("\nname(pointer)=%s",ptr);
}
int main()
{
	char name[10],*ptr;
	printf("enter  a string(name)=");
	scanf(" %s",name);
	ptr=name;
	displayArray(ptr);
	return 0; 
}


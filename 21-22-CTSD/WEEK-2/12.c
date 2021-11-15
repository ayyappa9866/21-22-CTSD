#include<stdio.h>
void displayCharString(char n[],char);
void displayCharString(char n[],char a)
{
	printf("\nName(string type)=%s",n);
	printf("\nalphabet(char type)=%c",a);
}
int main()
{
	char name[10],alpha;
    printf("enter name=");
    scanf("%c%c%c%c%c%c%c%c%c%c",&name[0],&name[1],&name[2],&name[3],&name[4],&name[5],&name[6],&name[7],&name[8],&name[9]);
	printf("\nenter alphabet=");
	scanf("\n%c",&alpha);
	displayCharString(name,alpha);
	return 0;
}


#include<stdio.h>
int main()
{
	char str1[30],str2[30];
	printf("Enter First string=");
	scanf("%s",str1); // to read single word
	printf("First string=%s",str1);
	printf("\nEnter Second string=");
	scanf("%[^\n]s",str2); // to read entire line 
	printf("Second string=%s",str2);
	return 0;
}

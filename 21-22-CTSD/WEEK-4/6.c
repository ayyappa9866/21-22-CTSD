#include<stdio.h>
void checkVowel(char);
void checkVowel(char ch)
{
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is vowel",ch);
			break;
		default:
			printf("%c is consonant",ch);
			break;						
	}
}
int main()
{
	char c;
	printf("Enter any character=");
	scanf("%c",&c);
	checkVowel(c);
	return 0;
}


#include<stdio.h>
void findCorrLanguage(char);
void findCorrLanguage(char ch)
{
	switch(ch)
	{
		case 'a':
			printf("Ada");
			break;
		case 'A':
			printf("Ada");
			break;
		case 'b':
			printf("Basic");
			break;
		case 'B':
			printf("Basic");
			break;
		case 'c':
			printf("COBOL");
			break;
		case 'C':
			printf("COBOL");
			break;
		case 'd':
			printf("dbase III");
			break;
		case 'D':
			printf("dbase III");
			break;
		case 'f':
			printf("Fortran");
			break;
		case 'F':
			printf("Fortran");
			break;
		case 'p':
			printf("Pascal");
			break;
		case 'P':
			printf("Pascal");
			break;
		case 'v':
			printf("Visual C++");
			break;
		case 'V':
			printf("Visual C++");
			break;
		default:
			printf("Invalid Character");
			break;		
	}
}
int main()
{
	char c;
	printf("Enter any character=");
	scanf("%c",&c);
	findCorrLanguage(c);// function calling
	return 0;
}

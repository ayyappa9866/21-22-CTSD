#include <stdio.h>
void PlayingWithCharacters(char ch,char *s,char *sen)
{
	printf("%c\n%s\n%s",ch,s,sen);
}
int main() 
{
    char ch;
    char s[24];
    char sen[100];
    scanf("%c\n%s\n%[^\n]s",&ch,s,sen);
    PlayingWithCharacters(ch,s,sen);
    return 0;
}

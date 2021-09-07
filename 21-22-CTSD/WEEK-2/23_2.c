#include <stdio.h>
void foo(int*);
int main() {
	int i = 10, *p = &i;
	printf("\nIn Main address of p=%u",p);
	foo(p++);
	printf("\nIn Main after calling function address of p=%u",p);
}
void foo(int *p) 
{
    printf("\nIn foo address of p=%u",p);
	printf("\n%d\n", *p);
}

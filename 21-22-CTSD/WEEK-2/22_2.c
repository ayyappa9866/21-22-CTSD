#include <stdio.h>
int main() {
	int N = 4;
	int *ptr1, *ptr2;
	ptr1 = &N;
	ptr2 = &N;
	printf("Pointer ptr2 before Addition: ");
	printf("%p \n", ptr2);
	ptr2 = ptr2 + 3;
	printf("Pointer ptr2 after Addition: ");
	printf("%p \n", ptr2);
	return 0;
}

/* output in dev c++ compiler

address will be printed in hexadecimal number system

Pointer ptr2 before Addition: 000000000062FE0C
Pointer ptr2 after Addition: 000000000062FE18   */

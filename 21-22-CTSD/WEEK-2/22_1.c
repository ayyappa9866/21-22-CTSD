#include <stdio.h>
int main() {
	int *ptr;
	int x;
	ptr = &x;
	*ptr = 0;
	printf(" x = %d\n", x);
	printf(" *ptr = %d\n", *ptr);
	*ptr += 5;
	printf(" x = %d\n", x);
	printf(" *ptr = %d\n", *ptr);
	(*ptr)++;
	printf(" x = %d\n", x);
	printf(" *ptr = %d\n", *ptr);
	return 0;
}

/* output in dev c++ compiler

x = 0
 *ptr = 0
 x = 5
 *ptr = 5
 x = 6
 *ptr = 6 */

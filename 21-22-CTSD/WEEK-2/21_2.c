#include <stdio.h>
int main() {
	int a = 0;
	double d = 10.21;
	printf("%lu", sizeof(a + d));
	return 0;
}

/* output in dev c++ Compiler
   8 */
   
/* output in Online GDB  Compiler
   8 */

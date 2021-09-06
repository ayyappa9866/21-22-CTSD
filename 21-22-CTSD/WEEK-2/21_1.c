#include <stdio.h>
int main() {
	int a, *p;
	char b, *q;
	float c, *r;
	double d, *s;
	printf("%d <--> %d\n", sizeof(a), sizeof(p));
	printf("%d <--> %d\n", sizeof(b), sizeof(q));
	printf("%d <--> %d\n", sizeof(c), sizeof(r));
	printf("%d <--> %d\n", sizeof(d), sizeof(s));
	return 0;	
}

/* Out put in devc++ compiler
4 <--> 8
1 <--> 8
4 <--> 8
8 <--> 8 */

/* Out put in online GDB compiler
4 <--> 8
1 <--> 8
4 <--> 8
8 <--> 8 */


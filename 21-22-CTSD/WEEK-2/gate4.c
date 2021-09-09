#include<stdio.h>
void f(int *p, int*q)
{
p=q;
*p=2;
}
int i=0, j=1;
int main()
{
f(&i, &j);
printf("%d %d\n",i,j);
return 0;
}

// output: 0 2

#include<stdio.h>
int f(int x, int *py, int **ppz)
{ 
	int y,z;
	**ppz+=1; z=**ppz;
	*py+=2; y=*py;
	x+=3;
    return x+y+z;
}
void main()
{ 
	int c, *b, **a;
	c=4; b=&c; a=&b;
	printf("%d",f(c,b,a));
}

// output: 19


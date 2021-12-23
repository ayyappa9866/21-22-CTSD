#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
int area(struct triangle p)
{
    float s=(p.a+p.b+p.c)/2.0;
    return s*(s-p.a)*(s-p.b)*(s-p.c);
    
}

void sort_by_area(triangle* tr, int n) {
  int i,j;
  for(i=0;i<n;i++)
  {
      for(j=0;j<n-1-i;j++){
      if(area(tr[j])>area(tr[j+1]))
      {
          struct triangle temp=tr[j];
          tr[j]=tr[j+1];
          tr[j+1]=temp;
      }
  }
}
}

int main()
{
	int n,i;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

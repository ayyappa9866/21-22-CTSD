/*     2,-2    2,-1    2,0    2,1    2,2
        3       3       3      3      3

      1,-2    1,-1    1,0    1,1    1,2
      3       2       2      2      3

     0,-2    0,-1    0,0    0,1    0,2
      3       2       1      2      3

    -1,-2   -1,-1   -1,0   -1,1   -1,2
      3       2       2      2      3

    -2,-2   -2,-1   -2,0   -2,1   -2,2
      3       3       3      3      3   */

#include <stdio.h>
#include <math.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main() 
{
    int n,i,j;
    scanf("%d", &n);
      for (i = n-1; i > -n; i--)
    {
        for (j = n-1; j > -n; j--)
        {
            printf("%d ", max(abs(i),abs(j))+1);
        }
        printf("\n");
    }
    return 0;
}


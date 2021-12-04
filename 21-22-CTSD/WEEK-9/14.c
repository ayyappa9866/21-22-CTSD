#include <stdio.h>
void CheffCake(int r,int c,char arr[r][c])
{ 
    int i,j,p1=0,p2=0;
	 for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            if((i+j)%2==0 && arr[i][j]=='G')
	                p1=p1+3;
	            if((i+j)%2==0 && arr[i][j]=='R')
	                p2=p2+5;
	            if((i+j)%2==1 && arr[i][j]=='R')
	                p1=p1+5;
	            if((i+j)%2==1 && arr[i][j]=='G')
	                p2=p2+3;
	        }
	    }
	    if(p1<p2)
	    printf("%d\n",p1);
	    else
	    printf("%d\n",p2);
}
int main() 
{
      int n;
      scanf("%d",&n);
    while(n--)
    {
      int r,c,i;
      scanf("%d%d",&r,&c);
      char arr[r][c];
     	    for(i=0;i<r;i++)
	    {
	        scanf("%s",arr[i]);
	    }
      CheffCake(r,c,arr);
    }
	return 0;
}

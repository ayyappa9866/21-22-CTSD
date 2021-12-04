#include<stdio.h>
int SubarrayDivision(int n, int *s, int d, int m)
{

  int sum = 0,i,j;
  int ans = 0;
  for (i=0;i<n-m+1;i++) {
    sum=0;
    for (j=i;j<i+m;j++) {
      sum=sum+s[j];
    }
    if (sum==d) {
      ans++;
    }
  }
    return ans;

}
int main()
{
    int n,a[100],d,m,i,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&d,&m);
    ans=SubarrayDivision(n,a,d,m);
    printf("%d",ans);
}


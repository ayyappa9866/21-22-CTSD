#include<stdio.h>
long int sum(long int);
long int sum(long int n)
{
  long int res=((n%1000000007)*(n%1000000007))%1000000007;    
  return res;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
      long int n,ans;
      scanf("%ld",&n);
      ans=sum(n);
      printf("%ld\n",ans);
      t--;  
    }
}
//((a mod n)*(b mod n))mod n=(ab)mod n

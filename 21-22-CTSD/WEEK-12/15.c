#include <stdio.h>
int Max(int h1, int h2, int h3)
{
        int max;
    if(h1 == h2 && h2 == h3)
        return h1;
    max=(h1>h2)?1:2;
    if(max==1)
        max=(h1>h3)?1:3;
    else
    max=(h2>h3)?2:3;
return max;
}
int balance(int *N1,int *N2,int *N3,int h1,int h2,int h3,int n1,int n2,int n3){
    int k1, k2, k3;
    k1=k2=k3=0;
    int  max=Max(h1,h2, h3);
    while(!(h1==h2&&h2==h3))
	{
        max=Max(h1,h2,h3);
        if(max==1)
            h1=h1-N1[k1++];
        else if(max==2)
            h2=h2-N2[k2++];
        else if(max==3)
            h3=h3-N3[k3++];
        if(h1==0||h2==0||h3==0)
            return 0;
    }
    return h2;
}
int main()
{
    int n1,n2,n3,h1,h2,h3,i;
    h1=h2=h3=0;
    scanf("%d %d %d",&n1, &n2, &n3);
    int N1[n1],N2[n2],N3[n3];
    for(i=0; i<n1; i++){
       scanf("%d",&N1[i]);
       h1 += N1[i];
    }
    for(i=0; i<n2; i++){
       scanf("%d",&N2[i]);
       h2 += N2[i];
    }
    for(i=0; i<n3; i++){
       scanf("%d",&N3[i]);
       h3 += N3[i];
    }
    printf("%d\n", balance(N1,N2,N3,h1,h2,h3,n1,n2,n3));  
    return 0;
}

#include<stdio.h>  
int converttobinary(int num)   
{
    int binary;
    if(num==0)
        return 0;
    else 
    {   
        binary=(num % 2)+10 *converttobinary(num / 2); 
        return binary;
    }
    
}
  
int main()  
{  
    int num,ans;  
    scanf("%d", &num);  
    ans=converttobinary(num);
    printf("%d",ans);
    return 0;  
}  
  


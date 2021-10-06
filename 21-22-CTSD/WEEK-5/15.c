#include<stdio.h>
void display(int);
void display(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    display(num);
    return 0;
}

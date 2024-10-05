#include<stdio.h>
int main()
{
    int a,b,i,c[10],sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i>a;i<b;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
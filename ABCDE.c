#include<stdio.h>
int main()
{
    int a,i,b[100],sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
     scanf("%d",&b[i]);
    for(i=0;i<a/2;i++)
    {   
        sum=sum+b[i];
    }
    printf("%d",sum);
    return 0;
}
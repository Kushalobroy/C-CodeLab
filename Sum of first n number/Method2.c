#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter nth number :");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Sum is : %d",sum);
    return 0;
}
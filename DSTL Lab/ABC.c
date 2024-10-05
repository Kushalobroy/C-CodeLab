#include <stdio.h>
int main()
{
    int n1,n2,i,j,k=0,l;
    
    printf("Enter Size of the Set A :");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter %d Element :",n1);
    for(i=0;i<n1;i++)
      scanf("%d",&a[i]);
    printf("Enter Size of the Set B : ");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter %d Element :",n2);
    for(j=0;j<n2;j++)
      scanf("%d",&b[j]);
   
    int c[n1+n2];
    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    } printf("The difference of both set A and set B(A-B)is:");
    for(i=0;i<k;i++)
     {
         printf("%d ",c[i]);
     }
     printf("\n");
    return 0;
}
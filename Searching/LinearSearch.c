#include<stdio.h>
void LinearSearch(int arr[],int len, int item)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]==item)
        {
            printf("%d found at index %d",item,i);
            return;
        }
    } printf("Not found");
}
int main()
{
    int n,arr[100],item;
     printf("Enter the number of element in Array :");
     scanf("%d",&n);
     printf("Enter %d element :",n);
     for(int j=0;j<n;j++)
     {
         scanf("%d",&arr[j]);
     }
     int len = sizeof(arr)/sizeof(arr[0]);
     printf("Enter item to be searched :");
     scanf("%d",&item);
     LinearSearch(arr, len, item);
}
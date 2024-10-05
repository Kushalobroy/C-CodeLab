#include<stdio.h>
void display(int a[], int size)
{
    int i;
    for(i=0;i<size;i++)
       printf("%d,",a[i]);
    printf("\n");
}
int main()
{
    int i,j,size,a[100];
    printf("Enter the size of the array :");
    scanf("%d",&size);

    printf("Enter %d elements :",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    int target;
    for(i=1;i<size;i++)
    {
        target=a[i];
        j=i-1;
        while(j>=0 && a[j]>target)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=target;
    }
    printf("After Insertion sort: \n");
    display(a,size);
    return 0;
}
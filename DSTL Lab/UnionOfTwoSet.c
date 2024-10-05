#include<stdio.h> 
int main()
{
int i,j,k,n,m;
printf("Enter size of first array:");
scanf("%d",&n);
printf("Enter elements of first array in ascending order:\n");
int a1[n];
for(i=0;i<n;++i){
scanf("%d",&a1[i]);
}
printf("\nEnter size of second array:");
scanf("%d",&m);
int a2[m];
printf("Enter elements of second array in ascending order:\n");
for(i=0;i<m;++i){
scanf("%d",&a2[i]);
}
int u[n+m];
for(i=0,j=0,k=0;i<n&&j<m;){
if(a1[i]<a2[j]){
u[k]=a1[i];
i++;
k++;
}
else if(a1[i]>a2[j]){
u[k]=a2[j];
j++;
k++;
}
else{
u[k]=a1[i];
i++;
j++;
k++;
}
}
if(i<n){
for(;i<n;++i){
u[k]=a1[i];
k++;
}
}
else if(j<m){
for(;j<m;++j){
u[k]=a2[j];
k++;
}
}
printf("\nUnion of two arrays is:\n");
for(i=0;i<k;++i){
printf("%d ",u[i]);
}
 
    return 0;
}
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    int result = myfunc(a,b);
    printf("%d",&result);

}
int myfunc(x,y){
    int sum;
    sum = x+y;
    return sum;
}

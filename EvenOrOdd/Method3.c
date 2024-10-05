#include<stdio.h>
int isEven(int num)
{
    return (!(num &1));

}
int main()
{
    int num;
    printf("ENter A NUmebr:");
    scanf("%d",&num);

    isEven(num)? cout << "Even" :cout << "Odd";
    return 0;
}

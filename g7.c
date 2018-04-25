#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the nos are %d and %d",a,b);
    return 0;
}

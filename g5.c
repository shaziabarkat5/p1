#include<stdio.h>
int main()
{

    int a,b,c;
    printf("enter the nos :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the largest no",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is the largest no ",b);
    }
    else{
        printf("%d is the largest no",c);
    }
    return 0;
}

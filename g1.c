#include<stdio.h>
int main()
{

    int a;
    printf("enter a no :");
    scanf("%d",&a);
    if(a>0)
    {
        printf("no is positive");
    }
    else if(a<0)
    {

        printf("no is negative");
    }
    else
    {
        printf("no is zero");
    }
    return 0;
}

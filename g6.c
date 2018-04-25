#include<stdio.h>
int main()
{
    int t1,t2,temp;
    printf("enter no. one :");
    scanf("%d",&t1);
    printf("enter no. two :");
    scanf("%d",&t2);
    temp = t1;
    t1=t2;
    t2=temp;
    printf("the no one is %d and the no. two is %d",t1,t2);
}

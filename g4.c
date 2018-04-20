#include<stdio.h>
int main()
{
    char x;
    printf("enter the character :");
    x=getchar();
    if(x>='a' && x<='z' || x>='A' && x<='Z')
    {
        printf("alphabet ");
    }
    else{
        printf("no");
    }
    return 0;
}

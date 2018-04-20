#include<stdio.h>
int main()
{
    char x;
    printf("enter a character");
    x=getchar();
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("the character is vowel");
    }
    else{
        printf("the character is consonent");
    }
    return 0;
}

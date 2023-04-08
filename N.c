#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z')
    //if(x>=97 && x<=122)
    {
       // small later
       printf("%c",x-32); 
    }
    else 
    {
        printf("%c",x+32);
    }
    return 0;
}
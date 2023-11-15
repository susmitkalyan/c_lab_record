#include<stdio.h>
int main()
{
    char ch;
    printf("Input a Character: ");
    ch=getchar();
    if(ch>=65&&ch<=90)
    {
        ch=ch+32;
    }
    else
    {
        ch=ch-32;
    }
    printf("Result: %c",ch);
}

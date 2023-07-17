#include<stdio.h>
int main()
{
    int i,j;
    char a;
    for(i=0;i<=3;i++)
    {
        a='A';
    for(j=1;j<=7;j++)
    {
        if(j>=1+i&&j<=7-i)
    {

        printf("%c",a);
        a++;
    }
    else
        printf(" ");

    }
    printf("\n");
        
    }
    printf("\n");
}
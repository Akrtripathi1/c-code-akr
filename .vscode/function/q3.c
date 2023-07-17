#include<stdio.h>
int akr(int);
int main()
{
    int k ,c ,b;
    printf("Enter a number :");
    scanf("%d",&b);
    k=akr(b);
    return (k==0)?1:0;
}

int akr(int a)
{
    int c;
    c=(a%2);
    return c;
}
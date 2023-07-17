#include<stdio.h>
int fibonacci(int);
void print(int);
int main()
{
    int j,k;
    printf("Enter a number :");
    scanf("%d",&j);
    print(j);
    return 0;
}
int fibonacci(int n)
{
    if(n==0||n==1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
void print(int n)
{
    if(n==0)
    printf(" %d ",n);
    else
    {
    print(n-1);
    printf(" %d ",fibonacci(n));
    }
}

#include<stdio.h>
void printn(int);
int main()
{
    int j;
    printf("Enter a number:");
    scanf("%d",&j);
    printn(j);
    return 0;
}
void printn(int n)
{
    if(n>0)
    {
        printf(" %d",n);
        printn(n-1);
    }
}
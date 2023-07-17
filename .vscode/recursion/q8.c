#include<stdio.h>
void dtob(int);
int main()
{
    int j;
    printf("Enter a number :");
    scanf("%d",&j);
    dtob(j);
    return 0;
}
void dtob(int n)
{
    if(n>0)
    {
    dtob(n/2);
    printf("%d",n%2);
    }
}
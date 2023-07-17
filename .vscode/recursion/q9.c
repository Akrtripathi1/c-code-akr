#include<stdio.h>
void dtooctal(int);
int main()
{
    int j;
    printf("Enter a number :");
    scanf("%d",&j);
    dtooctal(j);
    return 0;
}
void dtooctal(int n)
{
    if(n>0)
    {
        dtooctal(n/8);
        printf("%d",n%8);
    }
}
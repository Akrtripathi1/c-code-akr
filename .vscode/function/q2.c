#include<stdio.h>
int si(int, int ,int);
int main()
{
    int k ,d,e,f;
    printf("Enter principle value , rate of interrest and time period");
    scanf("%d%d%d",&d,&e,&f);
    k=si(d,e,f);
    printf("Simple interest is %d",k);
    return 0;
}
int si(int a,int b,int c)
{
    int d;
    d=(a*b*c)/100;
    return d;
}
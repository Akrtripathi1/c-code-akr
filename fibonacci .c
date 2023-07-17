#include<stdio.h>
int main()
{
    int a=0,b=1,i,n,c=0;
    printf("Enter a number :");
    scanf("%d",n);
    if(n==0||n==1)
    printf("%d",n);
    else
   c= a+b;
for(i=3;i<=n;i++)
{
    a=b;
    b=c;
    c=a+b;
    printf("%d",c);
}   
}
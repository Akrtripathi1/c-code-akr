#include<stdio.h>
int main()
{
    int a,b,p,i,j;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(j=a;j<=b;j++)
    {
        for(i=2;i<=j;i++)
        {
        if(j%i==0)
        break;
        }
        if(j==i)
        printf("\n%d",j);
    }

}
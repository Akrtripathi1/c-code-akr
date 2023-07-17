#include <stdio.h>

int main()
{
    int a,b, c, i;
    scanf("%d%d",&a,&b);
    for(i=a>b?a:b;i>=1;i--)
    {
    if(a%i==0&&b%i==0)
    break;
    }
    if(i==1)
    printf("the two number are coprime");
    else
    printf("the two number are not coprime");

    return 0;
}

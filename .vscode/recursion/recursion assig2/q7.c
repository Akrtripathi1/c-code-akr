#include<stdio.h>
int hcf(int ,int);
int main()
{
    int j,k,a;
    printf("Enter two number :");
    scanf("%d%d",&a,&j);
    k=hcf(a,j);
    printf("H.C.F is %d",k);
    return 0;
}
int hcf(int n, int m)
{
   if(n>m)
   {
    if(n%m==0)
    return m ;
    else
    return hcf(n%m,m);
   }
    else
    {
    if(m%n==0)
    return n;
     else
     return hcf(n,m%n);
    }
}
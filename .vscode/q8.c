#include<stdio.h>
int nPr(int, int);
int factorial(int);
int main()
{
    int l ,m,n;
    printf("Enter value of r and s:");
    scanf("%d%d",&l,&m);
     n= nPr(l,m);
     printf("Arrangement is %d",n);
     return 0;
}
int factorial(int a)
{
    int i ,j;
    if(a==0)
    return 1;
    for(i=a,j=1;i>=1;i--)
    {
        j=j*i;
    }
    return j;
    }
    int nPr(int c , int b)
    {
        int k;
        k=factorial(c)/factorial(b);
        return k;
    }

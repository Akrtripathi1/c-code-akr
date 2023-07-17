#include<stdio.h>
int sum(int);
int factorial(int);
int main()
{int p,k;
    printf("Enter a number :");
   scanf("%d",&p);
   k=sum(p);
printf("sum is %d",k);
return 0;

}
int factorial(int a)
{
    int i,j=1;
    for(i=a;i>=1;i--)
    {
         j=j*i;
    }
    return j;
}
int sum(int n)
{
    int m,o,q=0;
    for(m=1;m<=n;m++)
    {
 o=factorial(m)/m;
 q=q+o;
    }
    return q;
}
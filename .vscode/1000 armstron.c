#include<stdio.h>
int main()
{
    int a,b,sum,n,d,i,j,k;
    printf("Armstrong number till 1000 is :\n");
    for(a=1;a<=1000;a++)
    {
        b=a;
        n=0;
    while(b)
    {
      b=b/10;
       n++;
    }
    for(b=a ,sum=0;b;b=b/10)
    {
      k=b%10;
      
        for(d=1,j=1;j<=n;j++)
        {
           d=d*k;
        }   
        sum=sum+d;
    }  
   
   if(sum==a)
        printf("%d ",a);
    }
}

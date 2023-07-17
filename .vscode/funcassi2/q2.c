#include<stdio.h>
int hcf(int,int);
int main()
{
    int c,d ,k;
    printf("Enter a number ");
    scanf("%d%d",&c,&d);
    k=hcf(c,d);
    printf("hcf of %d and %d is %d ",c,d,k);
    return 0;
}
int hcf(int a,int b)
{
     int i;
     for(i=a<b?a:b;i>1;i--)
     {
        if(a%i==0&&b%i==0)
          {
            
            break;
          }
     }
     return i;
}
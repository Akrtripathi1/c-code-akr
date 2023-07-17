#include<stdio.h>
void prime(int);
int main()
{
    int l,k;
     printf("Enter a number ");
     scanf("%d",&l);
    prime(l);
    
     return 0;
}
void prime(int a)
{
    int i,j,b;
    for(j=2;j<=a-1;j++)
    {
        
        for(i=2;i<=j;i++)
        {
            if(j%i==0)
              {
                   break;
              }
        }
        if(i==j)
        
        printf("%d",j);
    }
    
}
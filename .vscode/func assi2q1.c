#include<stdio.h>
int lcm(int ,int);
int lcm(int, int);
int main()
{
    int d,k, e;
    printf("Enter a number ");
    scanf("%d%d",&d,&e);
       k=lcm(d,e);
       printf("lCM of %d and %d is %d ",d,e,k);
       return 0;
}
int lcm(int a , int b)
{
    int i;
    
    for(i=a>b?a:b;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            
           break;
        }
    }
     return i;
    
}
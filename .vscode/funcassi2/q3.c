#include<stdio.h>
int prime(int );
int main()
{
int b,c ;
printf("Enter a number ");
scanf("%d",&b);
if(prime(b))
 printf("%d is prime number ",b);
else
 printf("%d is not prime",b);
return 0;
}
int prime(int a)
{
 int i;
 for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            break;
        }
    }
        if(i==a)
        return 1;
        else
         return 0;
    
}
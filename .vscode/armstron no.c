#include<stdio.h>
#include<math.h>

int main()
{
    int a,b=0,i,j,c,d,e;
printf("Enter a number");
scanf("%d",&a);
j=a;
e=j;
         for(i=0;a;i++,a/=10);
        while(c=j%10)
        {
         d=pow(c,i); 
         b=d+b; 
         j<=0;
         j/=10;
        }    
       if(b==e)
       printf("%d is armstrong no.",b);
       else
    printf("%d is not a armstrong no",e);
        }    

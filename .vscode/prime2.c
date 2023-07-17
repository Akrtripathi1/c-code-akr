#include<stdio.h>
int main()
{
     int a,b,p,i,j;
    printf("Enter  number");
    scanf("%d",&a);
    for(j=a;;j++)
    {
        for(i=2;i<j;i++)
        {
        if(j%i==0)
        break;
        }
        if(j==i)
        break;
    }
    
        printf("\n%d",j);
 
}
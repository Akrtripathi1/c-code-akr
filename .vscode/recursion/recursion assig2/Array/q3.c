#include<stdio.h>
int main()
{
    int a[10],i,sum=0,sum1=0,j;
    printf("Enter all 10 numbers :");
    for(i=1;i<=10;i++)
    scanf("%d",&a[i]);
      for(i=1;i<=10;i++)
        {
            if(a[i]%2==0)
            sum=sum+a[i];
            else 
            sum1=sum1+a[i];
        }
        printf("sum of even numbers is %d",sum);
        printf("\n sum  of odd numbers is %d",sum1);
}
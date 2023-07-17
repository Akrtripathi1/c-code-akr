#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter all numbers :");
    for(i=1;i<=10;i++)
       scanf("%d",&a[i]);
       for(i=1;i<=10;i++)
        sum=sum+a[i];
        avg=(sum/10.0);
        printf("average of 10 number is %f",avg);
    
}
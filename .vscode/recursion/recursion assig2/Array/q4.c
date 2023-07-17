#include<stdio.h>
int main()
{
    int a[10],i,j,k,c=0;
    for(i=1;i<=10;i++)
    {
       scanf("%d",&a[i]);
    }
k=a[0];
        for(i=1;i<=9;i++)
        if(a[i]>k)
            k=a[i];
           printf("%d is the higest",k);

}
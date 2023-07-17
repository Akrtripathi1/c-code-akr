#include<stdio.h>
int main()
{
    int  c,i,j,k, a[10];
    printf("Enter all number :");
     for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
      for(k=0;k<=9;k++)
      {
        c=0;
        j=a[k];
        for(i=k+1;i<=9;i++)
    { 
        if(a[i]>j)
        {
        c=a[i];
        a[i]=j;
        j=c;
        }
    }
    printf(" %d ",j);
      }
}
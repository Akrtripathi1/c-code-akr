#include<stdio.h>
int main()
{
    int a[5],i,j,d,c=0,e=0;
    printf("Enter a number :");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    for(d=0;d<=4;d++)
    {
      e=0;
     c=0;
       j=a[d];
       for(i=d+1;i<=4;i++)
       {
       if(a[i]<j)
       {
       c=a[i];
       a[i]=j;
       j=c;
       }
       
      }
      printf(" %d ",j); 
    }
}

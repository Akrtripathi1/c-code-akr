#include<stdio.h>
int main()
{
    int a[5],c[5],i,j,k,d;
    printf("enter all elements of array :");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
      for(i=0,j=0;i<=4,j<=4;i++,j++)
      {
        c[j]=a[i];

      }
printf("%d %d %d %d %d",c[0],c[1],c[2],c[3],c[4]);

}
#include<stdio.h>
int main()
{
    int i,j,k,c,a[5];
    printf("Enter al numbers : \n");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
       for(k=0;k<=9;k++)
        {
            c=0;
           j=a[k];
              for(i=k+1;i<=9;i++)
              {
                if(a[i]<j)
                {
                    c=a[i];
                    a[i]=j;
                    j=c;

                }
              }
          }
        printf(" \n Second largest number is  %d ",a[3]);
}
#include<stdio.h>
int main()
{
   int i,j,c,d,a[10];
   printf("Enter all numbers :");
   for(i=0;i<=9;i++)
   scanf("%d",&a[i]);
     for(d=0;d<=9;d++)
     {
        c=0;
        j=a[d];
        for(i=d+1;i<=9;i++)
        {
            if(a[i]<j)
            c=a[i];
            a[i]=j;
            j=c;

        }

     }
    printf("\nSecond Smallest number is  %d :",a[1]);
}

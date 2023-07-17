#include<stdio.h>
void swap(int [],int,int,int);
int main()
{
    int a[5]={0,1,2,3,4};
    swap(a,5,0,1);
}
void swap(int a[],int n,int i,int j)
{
      int temp,k;
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       printf("%d %d",a[i],a[j]);
       for(k=0;k<=4;k++)
       printf("\n%d",a[k]);
}
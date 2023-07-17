#include<stdio.h>
int count(int[],int);
int main()
{
    int k, b[5]={10,20,50,10,20};
   k= count(b,5);
   printf("repeated number of elements are %d",k);
   return 0;
}
int  count(int a[],int n)
{
    int i,j,count =0;
   for(i=0;i<=n-1;i++)
   {
    for(j=i+1;j<=n-1;j++)
       if(a[i]==a[j])
        {
             count =count +1;
        }
   }
   return count;
}
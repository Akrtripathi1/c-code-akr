#include<stdio.h>
void sort(int[],int);
int main()
{
    int f[10],g,h;
      sort(f,5);
      return 0;
}
void sort(int b[],int n)
{
   int i,j,k,e;
   for(i=0;i<=5;i++)
     scanf("%d",&b[i]);
     for(j=0;j<=5;j++)
     {
        e=0;
        k=b[j];
        for(i=j+1;i<=5;i++)
        {
            if(b[i]<k)
            {
                e=b[i];
                b[i]=k;
                k=e;
            }
           
        }
         printf(" %d ",k);
     }
}
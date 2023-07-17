#include<stdio.h>
int array(int[],int);
int main()
{
      int c[10],k;
      printf("Enter a number ");
      k=array(c,10);
      printf("Smallest number is %d",k);
      return 0;
}
int array(int b[],int n)
{
  int i,j,k,d,e;
  for(i=0;i<=5;i++)
   scanf("%d",&b[i]);
   for(d=0;d<=5;d++)
      {
        e=0;
        j=b[d];
          for(i=d+1;i<=5;i++)
              {
                if(b[i]<j)
                {
                    e=b[i];
                    b[i]=j;
                    j=e;
                      
                }
                b[d]=j;
              }
              
              }
      return b[0];
}
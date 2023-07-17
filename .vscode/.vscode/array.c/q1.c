#include<stdio.h>
int array(int[] ,int );
int main()
{
    int c[5],k,a;
    k=array(c,5);
printf("highest no is %d",k);
return 0;
}
int array(int f[],int g)
{
   
    int i,b,j,d,e;
    for(i=0;i<=5;i++)
    scanf("%d",&f[i]);
    for(j=0;j<=5;j++)
    {
      e=0;
      d=f[j];
      for(i=j+1;i<=5;i++)
      {
        if(f[i]<d)
        {
          e=f[i];
          f[i]=d;
          d=e;

        }
       f[j]=d;
      }
      
       
      
    }
    return f[5];
    
}

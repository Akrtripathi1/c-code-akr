#include<stdio.h>
int nCr(int , int );
int factoria(int);
int main()
{
    int r,s,t;
    printf("Enter a number r and s :");
    scanf("%d%d",&r,&s);
        t= nCr(r,s);
        printf("number of arrangements for selecter %d and %d is %d ",r,s,t);
        return 0;
}
int factorial(int a)
{
  int i,j=1;
  if (a==0)
  return 0;
   
   for(i=a;i>=1;i--)
  {
    j=j*i;
    // printf("%d",j);
  }
return j;
}
int nCr(int c,int b)
{
   int k;
   k=factorial(c)/(factorial(b)*factorial(c-b));
   return k; 
}
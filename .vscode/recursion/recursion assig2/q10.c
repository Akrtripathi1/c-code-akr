#include<stdio.h>
int power(int,int);
int main()
{
    int j,k,c;
    printf("Enter a number :");
    scanf("%d%d",&j,&c);
    k=power(j,c);
    printf("power of %d is %d",j,k);
    return 0;
}
int power(int n,int y)
{
    if(y==0)
       return 1;
    if(y>0)
      return n*power(n,y-1); 
    else
    return power(n,y+1)/n; 
}

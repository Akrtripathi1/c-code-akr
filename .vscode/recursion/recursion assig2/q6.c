#include<stdio.h>
int factorial(int);
int main()
{
    int j,k;
    printf("Enter a number :");
    scanf("%d",&j);
    k= factorial(j);
    printf("%d",k);
    return 0;
}
int factorial(int n)
{
   if(n==1)
   return 1;
   return n*factorial(n-1);
}
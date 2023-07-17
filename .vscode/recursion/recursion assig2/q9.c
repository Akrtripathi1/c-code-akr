#include<stdio.h>
int count(int);
int main()
{
    int j,k;
    printf("enter a number :");
    scanf("%d",&j);
    k=count(j);
    printf("Count is %d",k);
    return 0;
}
int count(int n)
{
    int a;
    if(n==0)
    return 0;
   return count(n/10)+1; 
}

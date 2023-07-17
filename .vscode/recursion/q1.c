#include<stdio.h>
void print(int);
int main()
{
    int j ;
    printf("enter a number :");
      scanf("%d",&j);
      print(j);
      return 0;
}
void print(int n)
{
    if(n>0)
    {
     print(n-1);
    printf(" %d",n);
    }
}
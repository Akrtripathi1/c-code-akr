#include<stdio.h>
int digit(int);
int main()
{
  int j,k;
  printf("Enter a number :");
  scanf("%d",&j);
  k=digit(j);
  printf("%d",k);
  return 0;
}
int digit(int n)
{
    if(n>0)
     return (n%10)+digit(n/10);
    
}
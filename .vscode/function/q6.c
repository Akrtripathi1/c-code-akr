#include<stdio.h>
int fact(int);
int main()
{
  int k, b , d;
  printf("Enter a number :");
  scanf("%d",&b);
  k=fact(b);
  printf("\nFactorial of %d is %d ",b,k);

}
int fact(int a)
{
  int i,j;
  for(i=a,j=1;i>=1;i--)
  {
    j=j*i;
  }
 return j;
}
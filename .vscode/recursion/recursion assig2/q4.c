#include<stdio.h>
int square(int );
int main()
{
    int j,k;
    printf("Entr a number :");
    scanf("%d",&j);
    k=square(j);
    printf("%d",k);
    return 0;
}
int square(int n)
{
  if(n==1)
  return 1;
  return (n*n+square(n-1));

   }



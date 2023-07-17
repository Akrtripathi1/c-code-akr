#include<stdio.h>
void printn(int);
int main()
{
  int j;
  printf("Enter a number ");
 scanf("%d",&j);
 printn(j);
 return 0;

}
void printn(int n)
{  
    int k;
    if(n>0)
    {
     printn(n-1);
    printf(" %d",n*n);
    }
}
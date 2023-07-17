#include<stdio.h>
void Swap(int *p,int*q)
{
  int c=0;
  c=*p;
  *p=*q;
  *q=c;
}
int main()
{
    int a,b;
    printf("Enter two numbers you want to swap :");
    scanf("%d%d",&a,&b);
    Swap(&a,&b);
   printf("swap no is %d and %d",a,b);
   return 0;
}
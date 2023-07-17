#include<stdio.h>
#include<stdlib.h>
void average(int d)
{
   int c=0,j, k=0,*p;
    p=(int *)calloc(d,sizeof(int));
    printf("Enter all numbers below :");
    for(j=0;j<d;j++)
    scanf("%d",p+j);
     for(j=0;j<d;j++)
     c+=*(p+j);
     k=c/d;
      
   printf("Average is %d",k);
}
int main()
{
    int i;
    printf("Enter  number you want a fide avg of :");
    scanf("%d",&i);
   average(i);
   return 0;
}
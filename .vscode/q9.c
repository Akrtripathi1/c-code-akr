#include<stdio.h>
int digit(int,int);
int main()
{
   int k, j,m;
   printf("enter number");
   scanf("%d",&k);
   printf(" Enter digit you want to check :");
   scanf("%d",&m);
   if(digit(k,m))
     printf("yes %d have 2",k);
     else 
     printf("no");
}
int digit(int a,int b)
{
   int i=1,p;
   while (a)
   {
     p=a%10;
         if(p==b)
         return 1;
       a=a/10;
       i++;
   
   }
   
   return 0;
}
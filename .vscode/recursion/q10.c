#include<stdio.h>
void reverse(int);
int main()
{
   int j;
   printf("Enter a number :");
   scanf("%d",&j);
     reverse(j);
     return 0;

}
void reverse(int n)
{
    if(n>0)
    {
       printf("%d",n%10);
       reverse(n/10);  
   
    }
}
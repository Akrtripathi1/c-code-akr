#include<stdio.h>
void fibonacci(int);
int main ()
{
    int k;
    printf("Enter a number");
    scanf("%d",&k);
    fibonacci(k);
    return 0;

}
void fibonacci(int a)
{
int i=1, j,c=1 ,n;
n=a;
for(i=0,n=-1,j=1;i<=a;i++)
{
    c=n+j;
    n=j;
    j=c;
printf(" %d ",c);
}

   

}
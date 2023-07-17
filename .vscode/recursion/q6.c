#include<stdio.h>
void even(int);
int main()
{
    int j;
    printf("Enter a number :");
    scanf("%d",&j);
    even(j);
    return 0;
}
void even(int n)
{
    if(n>0)
    {
       if(n%2==0)
       printf(" %d",n);
       even(n-1);
       
    }
}
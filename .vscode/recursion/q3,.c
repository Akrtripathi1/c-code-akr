#include<stdio.h>
void odd(int);
int main()
{
    int j;
    printf("Enter a number");
    scanf("%d",&j);
    odd(j);
    return 0;
}
void odd(int n)
{
     if(n>0)
     {
        odd(n-1);
        if(n%2!=0)
        printf(" %d",n);
     }

}
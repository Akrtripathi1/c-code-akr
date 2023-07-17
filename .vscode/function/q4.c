#include<stdio.h>
void natural(int);
int main()
{
    int k, b,c;
    printf("Enter value of n:");
    scanf("%d",&b);
    natural(b);
    return 0;
}
void natural(int a)
{
 int i,j=0;
 for(i=1;i<=a;i++)
 {
    j=i;
    printf("  %d",j);
 }
}
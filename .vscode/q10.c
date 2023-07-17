#include<stdio.h>
void prime(int);
int main()
{
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    prime(a);
    return 0;
}
void prime(int n)
{
    int i=2;
    while(n>1)
     {
       
        while(n%i==0)
        {
            printf(" %d ",i);
            n/=i;

        }
     
        i++;
     }

}
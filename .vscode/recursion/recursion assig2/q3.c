#include<stdio.h>
int even(int);
int main()
{
    int j,k;
    printf("Enter a number :");
    scanf("%d",&j);
    k=even(j);
    printf("%d",k);
    return 0;
}
int even(int n)
{
    if(n==1)
    return 2;
    return 2*n+even(n-1);


}
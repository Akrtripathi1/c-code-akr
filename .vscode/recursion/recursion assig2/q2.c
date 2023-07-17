#include<stdio.h>
int odd(int);
int main()
{
    int j,k;
    printf("Enter a number :");
    scanf("%d",&j);
    k=odd(j);
    printf("%d",k);
    return 0;
}
int odd(int n)
{
   if(n==1)
       return 1;
    return 2*n-1+odd(n-1);

}     
        
  
    
    

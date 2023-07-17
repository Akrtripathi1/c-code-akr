#include <stdio.h>

int main() {
    int i, n ,c=0; 
    printf("Enter a number N ;");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
  c=c+(2*i-1);
    }
     printf(" sum is %d ",c);
    
    
   
    return 0;
}
#include <stdio.h>

int main() {
    int i, n ,count; 
    printf("Enter a number N ;");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    if(n%i==0)
     break;
    if(i==n)
printf(" prime");
    else 
    printf(" not prime");
    
   
    return 0;
}
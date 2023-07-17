#include <stdio.h>

int main() {
    int i, n ,count; 
    printf("Enter a number N ;");
    scanf("%d",&n);
    for(count=0;n;n/=10,count++);
    
     printf(" digits is  %d ",count);
    
    
   
    return 0;
}
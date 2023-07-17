


#include <stdio.h>
int main() {
    int a,i;
    printf("Enter  number ");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++){
      if(a%i==0)
         break;
    }
   if(i==a)
   
   printf("prime");
   else
   (" not prime");
 return 0;
}
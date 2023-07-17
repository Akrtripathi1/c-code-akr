#include<stdio.h>
int main()
{
    int a ,b,c;
    printf("Enter  values a :");
      scanf("%d",&a);
    printf("Enter  values b :");
      scanf("%d",&b);
    printf("Enter  values c :");
        scanf("%d",&c);
         if(a>b)
    printf("%d is greatest number",a);
    else if(a>c)   
   printf("%d is greatest number",a);
   
     else if(b>c) 
     printf("%d is greatest number",b);
   else 
   {
   printf("%d is greatest number",c);

    
 printf("%d is greatest number",b);
   }
}
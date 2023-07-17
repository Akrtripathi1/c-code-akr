#include<stdio.h>
int main()
{
    int i,j,a=1 ,b;
    
    for(i=1;i<=4;i++)
    {
 for(j=1;j<=i;j++ )
    {
        if(j<=i+1){
   printf("%d",a);
    a++;}
else
printf(" "); 
    }
        printf("\n");
    }
    printf("\n");
}
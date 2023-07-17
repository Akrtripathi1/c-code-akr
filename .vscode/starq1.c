#include<stdio.h>
int main()
{
    int i,j,a,b;
    for(i=0;i<=4;i++)
      {
        for(j=1;j<=5;j++){
            if(j<=1+i)
        printf("*");
        else
        printf(" ");
        }
        printf("\n");
      }
       printf("\n");
}
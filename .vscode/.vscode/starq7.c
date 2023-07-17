#include<stdio.h>
int main()
{
   int i,j,a;
   char k;
    for(i=0;i<=4;i++)
    {
        k='A';
        for(j=1;j<=5;j++)
        {
            if(j>=1+i)
            {
            printf("%c",k);
            k++;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
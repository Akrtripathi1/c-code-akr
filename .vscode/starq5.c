#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=0;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=1+i)
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
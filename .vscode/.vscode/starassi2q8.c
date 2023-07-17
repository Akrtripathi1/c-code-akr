#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=4-i||j>=4+i)
            {
                printf("*");

            }
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=0;i<=3;i++)
    {
        a=1;
        for(j=1;j<=7;j++)
        {
            if(j<=4-i||j>=4+i)
            {
               
                printf("%d",a);
                j<4?a++:a--;
                 
            }
            else
            {
            printf(" ");
             if(j==4)
             a--;
           
            }
        }
        printf("\n");
    }
    printf("\n");
}
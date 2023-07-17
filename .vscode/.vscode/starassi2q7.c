#include<stdio.h>
    int main()
    {
        int i,j,k,count;
        for(i=0;i<=4;i++)
        {
            k=1;
            count=1;
            for(j=1;j<=9;j++)
            {
                if(j>=5-i&&j<=5+i&&count)
                {
                   printf("%d",k);
                   j<5?k++:k--;
                   count=0;
                }
                else{
                printf(" ");
                count=1;
                }
            }
            printf("\n");

        }
        printf("\n");
    }

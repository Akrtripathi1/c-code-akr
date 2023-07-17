#include<stdio.h>
void prime(int, int );
int main()
{
    int c,d,k;
    printf("Enter two number ");
    scanf("%d%d",&c,&d);
      prime(c,d);
      return 0;

}
void prime(int a, int b)
{
    int i,j,n;
    
    for(j=a;j<=b;j++)
    {
        
        for(i=2;i<=j;i++)
        {
            if(j%i==0)
            {
                break;
            }
        }
        if(i==j)
        printf("\n%d",j);
    }
}
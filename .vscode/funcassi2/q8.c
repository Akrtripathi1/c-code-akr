#include<stdio.h>
void triangle(int );
int  factorial(int);
int combi(int ,int);
int factorial( int n )
{
  int i,j=1;
  if (n==0)
  return 1;
  for(i=n;i>=1;i--)
  {
      j=j*i;
  }
  return j;
}
int combi(int o,int l)
{
    return factorial(o)/(factorial(l)*factorial(o-l));   
}
int main()
{
    int c,d;
    printf("Enter the value");
      scanf("%d",&d);
      triangle(d);
     return 0;

}
void triangle(int a)
{
    int i, j,r,k;
    for(i=1;i<=a;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*a-1;j++)
        {
            if(j>=a+1-i&&j<=a-1+i)
            {
                if(k)
                printf("%d",combi(i-1,r++));
                 else
                    printf(" ");
                    k=1-k;
            }
            else
            {
               printf(" ");
            
            }
        }
        printf("\n");
    }
       printf("\n");
}
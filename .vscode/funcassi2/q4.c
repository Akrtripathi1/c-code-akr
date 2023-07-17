#include<stdio.h>
int prime(int);
int main()
{
    int k ,b  ;
    printf("Enter a number ");
    scanf("%d",&b);
    k=prime(b);
    printf("%d is the next prime number ",k);
    
    return 0;

}
int prime(int a)
{
  int i,j,flag;
  for(j=a+1;;j++)
  {
    

    for(i=2;i<=j;i++)
    {
        
        if(j%i==0)
        {
           
            break;
        }
     
    }
    if(j==i)
   break;

  }
  return j;
}
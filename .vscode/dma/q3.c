#include<stdio.h>
#include<stdlib.h>
void sum( int a)
{
  int l,*p=NULL,sum=0;
   
        p=(int *)malloc(sizeof(int));
        for(l=0;l<a;l++)
        {
            scanf("%d",p+l);
            sum+=*(p+l);
        }
        printf("Sum is %d",sum);
        free(p);
}
int main()
{
    int i;
    printf("Enter number you want to add");
    scanf("%d",&i);
    sum(i);
    return 0;
}
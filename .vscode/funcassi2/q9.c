#include<stdio.h>
#include<math.h>
void armstrong(int ,int);
int main()
{
    int o,p;
    printf("Enter a number frm wher you want to check and end number :");
    scanf("%d%d",&o,&p);
    armstrong(o,p);
    return 0;
}
void armstrong(int a , int b)
{
    int i,j ,c,sum=0,d,m,n;
    for(n=a;n<=b;n++)
    {
        c=n;
         i=0;
            while(c)
            {
              c/=10;
              i++;
              
            }
            //printf("%d", i);
            j=n;
            sum=0;
            while(j)
            {
                //printf("%d\n",j);
                d=j%10;
                 //printf("%d\n",j);
               
                    sum = sum+pow(d,i);
                    //printf("%d\n",sum);
                    j=j/10;
            }
                
            
            if(sum==n)
               printf("%d\n",n);
           
    }


}
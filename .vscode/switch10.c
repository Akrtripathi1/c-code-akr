#include<stdio.h>
int main()
{
    int a,b ,i, j ,c,d,e,f;
    printf("Choose from the given dropdown");
    printf("1.L.C.M. of two numbers\n2.Sum of two number\n3.Volume of cuboid\n4.Number is prime or not\n5.Exit\n");
    scanf("%d",&a);
    switch(a)
    {
     case 1: 
     {
        printf("enter two numbers :");
        scanf("%d%d",&a,&b);
       for(i=a>b?a:b;i<=a*b;i++)
        {
           
             if(i%a==0&&i%b==0){
             printf("L.C.M is %d",i);
             
             break;
             }
        }
      }
      case 2: {printf("enter two number :");
              scanf("%d%d",&a,&b);
              printf("Sum is %d",a+b);
      } 
      case 3:
      {
        printf("enter length breadth and height");
        scanf("%d%d%d",&a,&b,&c);
        printf("Volume of cuboid is %d",a*b*c);
      }
      case 4:
      {
        printf("Enter two number :");
        scanf("%d",&a);
        for(i=2;i<=a-1;i++)
        {
           if(a%i==0)
           break;
        
        }
        if(i==a)
        printf("prime");
        else
        printf("non prime");
      }
    }  
    
}
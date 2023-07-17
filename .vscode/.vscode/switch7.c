#include<stdio.h>
int main()
{
    int a, b,i,c,d,e,f,j,sum;
    printf("Choose operations want to perform:");
    printf("1.factorial of number \n2.Check even or odd\n3.Area of circle\n4.Sum of n natural number\n5.Exit\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:{
         printf("Enter a number:  ");
         scanf("%d",&b);
           j=1;
         for(i=b;i>=1;i--)
         {
            j=j*i;
         }
         printf(" factorial is %d",j);
         break;
        }
        case 2:
        {
        printf("Enter a number:");
        scanf("%d",&b);
        (b%2==0)?printf("Even number"):printf("Odd number");
        break;
        }
        case 3:
        {
            printf("Enter radius of circle :");
            scanf("%d",&e);
            printf("Area of circle is: %d ",(22/7)*e*e);
            break;
        }
        case 4:
        {
          printf("Enter a number :");
          scanf("%d",&c);
          sum=0;
          for(d=1;d<=c;d++)
          {
            sum=sum+d;
           
          }
          printf("Sum  of n natural numbers is : %d",sum);
          break;
        }
        default:
        printf("no operation performed");
         break;

    }

}


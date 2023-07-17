#include<stdio.h>
int main()
{
   int a,b,c,d,e,f,g,h,i;
    printf(" 1. Adddition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit");
     printf("\nChoose from above option:");
   scanf("%d",&a);
  switch(a)
   {
     case 1: printf("\nEnter two number :");
              scanf("%d%d",&b,&c);
              printf("Result is %d",b+c);
              break;
case 2: printf("Enter two number :");
              scanf("%d%d",&d,&e);
              printf("Result is %d",d-e);
                 break;
case 3: printf("Enter two number :");
              scanf("%d%d",&f,&g);
              printf("Result is %d",f*g);
              break;
case 4: printf("Enter two number :");
              scanf("%d%d",&h,&i);
              printf("Result is %d",h/i);
              break;
case 5: printf(" no operation performed");
              break;
   }
}
#include<stdio.h>
int main()
{
    int a,b ,c,d,e,f,g,h,i;
    printf("Enter first sides of triangle:");
     scanf("%d",&a); 
     printf("\nEnter second side of triangle:");
      scanf("%d",&b); 
      printf("\nEnter third sides of triangle:");
       scanf("%d",&c); 
       printf("choose from drop down you swant to check:");
       printf(" 1. Isoceles triangle\n 2. Eqilateral triangle\n 3. Right angle triangle\n 5. Exit\n");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
       (a==b&&a+b>c)?printf("triangle is isosceles"): printf("not a isoceles triangle");
        break;
         case 2:
        (a==b==c&&a+b>c)?printf("triangle is eqilatreral") :printf("not a eqilateral triangle");
        break;
         case 3: 
        (a*a+b*b==c*c)?printf("triangle is right angle") :printf("not a right angle triangle"); 
        break;
        case 4:printf("NO operation performed");
    }

}
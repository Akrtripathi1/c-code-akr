#include<stdio.h>
int area(int);
int main()
{
    int x,k;
    printf("enter radius of circle");
    scanf("%d",&x);
    k=area(x);
    printf("Area of circle is %d",k);
return 0;

}
int area(int a)
{
    int c;
    c=3.14*a*a;
    return c;
}
#include<stdio.h>
#include<string.h>
 struct employee{
    int id;
    float salary;
    char name[20];
} b1;

struct employee input()
{

    scanf("%d",&b1.id);
    fflush(stdin);
    fgets(b1.name,20,stdin);
    scanf("%f",&b1.salary);
      return b1;
   
}
int main()
{
   
b1=input();
 printf("%d\n",b1.id);
    printf("%s\n",b1.name);
    printf("%.1f\n",b1.salary);

}


#include<stdio.h>
struct employee
{
  int id;
  int name[20];
   int salary;
}b[3];
struct employee input(struct employee b[],int f)
{
    int i;
    for(i=0;i<f;i++){
     scanf("%d",&b[i].id);
    scanf("%s",&b[i].name);
    scanf("%d",&b[i].salary);
    
     return b[i];
    }
    
}
int highest_salary(struct employee b[],int d)
{
    int i,c=0;
for(i=0;i<d;i++){
b[i]=input(b,d);

}
    
    for(int j=0;j<d;j++)
    {
     if(b[j].salary>=b[j+1].salary)
      
          c=b[j].salary;
           else
          c=b[j+1].salary;
          }
          
          return c;
}
int main()
{
    int k,e;
    printf("enter no of emplyee :");
    scanf("%d",&e);
    k=highest_salary(b,e);
    printf("highest salary is %d",k);
}
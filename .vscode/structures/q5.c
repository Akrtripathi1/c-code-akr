#include<stdio.h>
struct employee
{
  int id;
  int name[20];
   int salary;
}b[3],c;
struct employee input(struct employee g)
{
    
    int i;
    
     scanf("%d",&g.id);
    scanf("%s",&g.name);
    scanf("%d",&g.salary);
    
     return g;
    
    
}
void highest_salary(struct employee b[],int d)
{
    int i,l;
    struct employee f;
        for(i=0;i<d;i++)
    {
        b[i]=input(c);
       

    }
   
       for(l=0;l<d;l++)
    {
        for(int j=0;j<d-l-1;j++)
        {
             
                if(b[j].salary>=b[j+1].salary)
            {
                    f.salary=b[j].salary;
                    
                    b[j].salary=b[j+1].salary;
                     
                    b[j+1].salary=f.salary;
                
            }
            
        }
    }
     for(int k=0;k<d;k++)
    printf("%d\n",b[k].salary);
       
}
int main()
{
    int k[100],e,l;
    printf("enter no of emplyee :");
    scanf("%d",&e);
    highest_salary(b,e);
    
   return 0;
}
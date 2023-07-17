#include<stdio.h>
#include<string.h>
struct employee
{
  int id;
  int name[20];
   int salary;
}b[100],c;
 struct employee input(struct employee d)
 {
    scanf("%d",&d.id);
    fflush(stdin);
   scanf("%s",d.name);
    scanf("%d",&d.salary);
    return d;

 }
void names(struct employee b[],int size)
{
 int i,l;
 
 struct employee g;
 
        for(i=0;i<size;i++)
        {
            b[i]=input(c);
        }
        for(l=0;l<size-1;l++)
    {
        for(int j=l+1;j<size;j++)
        {
        
            if(strcmp(b[l].name,b[j].name)>0)
            {
                strcpy(g.name,b[l].name);
                strcpy(b[l].name,b[j].name);
                strcpy(b[j].name,g.name);
            }
        }
    }
            for(i=0;i<size;i++)
                printf("%s\n",b[i].name);
}
int main()
{
    int i,e;
    printf("Enter the size");
    scanf("%d",&e);
    names(b,e);
    return 0;

}
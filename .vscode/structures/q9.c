#include<stdio.h>
#include<stdio.h>
struct student{
   int rollno;
   char name [20];
}c;
struct student input(struct student g)
{
    int i;
    
    
    printf("Enter roll no");
    scanf("%d",g.rollno);
    fflush(stdin);
    printf("Enter name ");
    fgets(g.name,20,stdin);
    return g;
}
void display(struct student b[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        b[i]=input(c);
    }
    for(i=0;i<size;i++)
{
    printf("%d",b[i].rollno);
      printf("%s",b[i].name);
}
}
int main()
{
    int n;
    printf("Enter no of students you want to display data of : ");
    scanf("%d",&n);
    struct student b1[1000];
    display(b1,n);
    return 0;
}
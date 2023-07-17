#include<stdio.h>
#include<stdio.h>
struct student{
   int rollno;
   char name [20];
   int maths ,chemistry,physics;
   float percentage;
}b[5],c;

struct student input(struct student g)
{
    printf("Enter roll no");
    scanf("%d",&g.rollno);
    printf("Enter name ");
    fflush(stdin);
    fgets(g.name,20,stdin);
      printf("Enter maths marks out of 100");
    scanf("%d",&g.maths);
      printf("Enter chemistry marks out of 100");
    scanf("%d",&g.chemistry);
      printf("Enter physics marks out of 100");
    scanf("%d",&g.physics);
    
    return g;
}
void display(struct student b[],int size)
{
    int i,j=0;
    for(i=0;i<size;i++)
    {
        b[i]=input(c);
    }
    
    while(j<1)
    {
        float k,total=b[j].physics+b[j].chemistry+b[j].maths;
           k=total/300;
        b[j].percentage=k*100;
        
        j++;
    }
    for(i=0;i<size;i++)
{
    
    printf(" maths_marks :%d\nchemistry_marks :%d\nphysics_marks :%d\n over all percentage is :%1f\n",b[i].maths,b[i].chemistry,b[i].physics,b[i].percentage);
}
}
int main()
{
    
    struct student b1[1000];
    display(b,5);
    return 0;
}
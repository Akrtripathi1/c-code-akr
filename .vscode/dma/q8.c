#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
   char name[20];
   int rollno;
    char college[40];
};
struct studentteam
{
 struct student s1;
 struct student s2;
};
struct student *new(char n[],int a,char c[])
{
    struct student *p;
    p=(struct student*)malloc(sizeof(struct student));
    strcpy(p->name,n);
    p->rollno=a;
     strcpy(p->college,c);
       return p;
}
struct studentteam * neew(struct student s,struct student k)
{
     struct studentteam *p;
     p=(struct studentteam*)malloc(sizeof(struct studentteam));
     p->s1=s;
      p->s2=k;
      return p;
}
void display(struct student t)
{
    printf("%s %d %s",t.name,t.rollno,t.college);
}
void team(struct studentteam s)
{
    printf("\nTeam");
    display(s.s1);
    display(s.s2);

}
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
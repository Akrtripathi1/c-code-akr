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
struct studentteam *new(struct student s,struct student k)
{
     struct studentteam *p;
     p=(struct studentteam*)malloc(sizeof(struct studentteam));
     p->s1=s;
      p->s2=k;
      return p;
}
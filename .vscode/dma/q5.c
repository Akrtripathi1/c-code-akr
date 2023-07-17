#include<stdio.h>
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
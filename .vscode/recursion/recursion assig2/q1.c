#include<stdio.h>
int  sum(int );
int sum(int n)
{
     if(n>0)
     {
        return n+sum(n-1);
     }
} 